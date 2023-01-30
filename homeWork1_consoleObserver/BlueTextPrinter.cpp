#include "BlueTextPrinter.h"

void BlueTextPrinter::printText() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	std::cout << "Hello world!" << '\r' << std::flush;
}
