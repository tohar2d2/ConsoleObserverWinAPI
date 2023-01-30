#include "EnterReaction.h"

EnterReaction::EnterReaction(std::shared_ptr<ITextPrinter> textPrinter) : AbstractCursorInWindowReaction(textPrinter) {}

std::string EnterReaction::React() {
	_textPrinter->printText();
	return "Enter";
}
