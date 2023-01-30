#include "Window.h"
#include "Logger.h"

int main() {
	auto mainWindow = std::make_shared<Window>(std::make_shared<CursorInWindowReactionStrategy>());
	auto mainLogger = std::make_shared<Logger>("MouseInWindowLog.txt");
	mainWindow->AddObserver(mainLogger);
	mainWindow->WatchTheMouse();
	return 0;
}