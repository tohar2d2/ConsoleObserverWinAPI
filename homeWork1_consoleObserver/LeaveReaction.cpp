#include "LeaveReaction.h"

LeaveReaction::LeaveReaction(std::shared_ptr<ITextPrinter> textPrinter) : AbstractCursorInWindowReaction(textPrinter) {}

std::string LeaveReaction::React() {
	_textPrinter->printText();
	return "Leave";
}
