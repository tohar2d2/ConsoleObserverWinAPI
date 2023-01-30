#pragma once

#include "AbstractCursorInWindowReaction.h"

class EnterReaction : public AbstractCursorInWindowReaction {
public:
	EnterReaction(std::shared_ptr<ITextPrinter> textPrinter);
	std::string React() override;
};
