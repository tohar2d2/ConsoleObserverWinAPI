#pragma once

#include "AbstractCursorInWindowReaction.h"

class LeaveReaction : public AbstractCursorInWindowReaction {
public:
	LeaveReaction(std::shared_ptr<ITextPrinter> textPrinter);
	std::string React() override;
};
