#pragma once

#include <Windows.h>
#include <string>
#include <iostream>
#include <memory>
#include "ITextPrinter.h"

class AbstractCursorInWindowReaction {
public:
	std::string virtual React() = 0;
	AbstractCursorInWindowReaction(std::shared_ptr<ITextPrinter> textPrinter);
protected:
	std::shared_ptr<ITextPrinter> _textPrinter;
};
