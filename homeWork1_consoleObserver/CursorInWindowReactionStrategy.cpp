#include "CursorInWindowReactionStrategy.h"

std::optional<std::shared_ptr<AbstractCursorInWindowReaction>> CursorInWindowReactionStrategy::ChooseStrategy() {
	POINT pMouse;
	RECT rectConsole;
	HWND hWndConsole = GetConsoleWindow();
	GetWindowRect(hWndConsole, &rectConsole);
	if (!GetCursorPos(&pMouse))
		return std::nullopt;
	if (PtInRect(&rectConsole, pMouse)) {
		if (!isMouseInWindow) {
			isMouseInWindow = true;
			return std::make_shared<EnterReaction>(std::make_shared<GreenTextPrinter>());
		}
	}
	else if (isMouseInWindow) {
		isMouseInWindow = false;
		return std::make_shared<LeaveReaction>(std::make_shared<BlueTextPrinter>());
	}
	return std::nullopt;
}
