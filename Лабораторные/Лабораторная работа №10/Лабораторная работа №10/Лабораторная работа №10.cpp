#define _CRTDBG_MAP_ALLOC 
#include "Function_Class.h"
int main() {
	setlocale(LC_ALL, "Russian");
	menu();
	if (_CrtDumpMemoryLeaks())
	{
		std::cout << "Утечка памяти обнаружена." << "\n";
	}
	else 
	{
		std::cout << "Утечка памяти не обнаружена." << "\n";
	}
}