#pragma once

#include <Windows.h>
#include <optional>
#include "AbstractCursorInWindowReaction.h"
#include "EnterReaction.h"
#include "LeaveReaction.h"
#include "GreenTextPrinter.h"
#include "BlueTextPrinter.h"

class CursorInWindowReactionStrategy {
public:
	std::optional<std::shared_ptr<AbstractCursorInWindowReaction>> ChooseStrategy();
private:
	bool isMouseInWindow = false;
};
