#pragma once

#include <iostream>
#include <Windows.h>
#include "ITextPrinter.h"

class GreenTextPrinter : public ITextPrinter {
public:
	void printText() override;
};
