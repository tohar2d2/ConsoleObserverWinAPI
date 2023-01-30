#include "GreenTextPrinter.h"

void GreenTextPrinter::printText() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	std::cout << "Hello world!" << '\r' << std::flush;
}
