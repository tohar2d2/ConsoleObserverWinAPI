#pragma once

#include "ISubject.h"
#include "CursorInWindowReactionStrategy.h"
#include <list>
#include <Windows.h>


class Window : public ISubject {
public:
    Window(std::shared_ptr<CursorInWindowReactionStrategy> strategy);

    void AddObserver(std::shared_ptr<IObserver> observer) override;
    void RemoveObserver(std::shared_ptr<IObserver> observer) override;
    void NotifyObservers(const std::string& message) override;

    void HowManyObservers();

    void WatchTheMouse();

private:
    std::list<std::shared_ptr<IObserver>> _list_observer;
    std::shared_ptr<CursorInWindowReactionStrategy> _strategy;
};

