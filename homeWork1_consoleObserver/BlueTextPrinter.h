#pragma once

#include <iostream>
#include <Windows.h>
#include "ITextPrinter.h"

class BlueTextPrinter : public ITextPrinter {
public:
	void printText() override;
};
