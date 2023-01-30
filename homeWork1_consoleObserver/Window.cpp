#include "Window.h"
#include <iostream>
#include <list>
#include <thread>
#include <chrono>
#include <future>

using namespace std::chrono_literals;

Window::Window(std::shared_ptr<CursorInWindowReactionStrategy> strategy) : _strategy(strategy) {}

void Window::AddObserver(std::shared_ptr<IObserver> observer) {
	_list_observer.push_back(observer);
}

void Window::RemoveObserver(std::shared_ptr<IObserver> observer) {
	_list_observer.remove(observer);
}

void Window::NotifyObservers(const std::string& message) {
	for (auto& obs : _list_observer) {
		obs->Update(message);
	}
}

void Window::HowManyObservers() {
	std::cout << "There are " << _list_observer.size() << " observers in the list.\n";
}

void Window::WatchTheMouse() {
	std::cout << "Press Enter to stop watching the mouse" << std::endl;

	auto future = std::async(std::launch::async, [] {
		std::cin.get();
	});

	while (future.wait_for(0ms) != std::future_status::ready) {
		if (auto reaction = _strategy->ChooseStrategy(); reaction.has_value())
			NotifyObservers(reaction.value()->React());
	}; 
}