#include "menu.h"
#define _CRTDBG_MAP_ALLOC 

int main() {
	setlocale(LC_ALL, "Russian");
	Inheritor_ССountry exe("Тест1", 121, 35334535, 75757565, 1, 22062012, 1, 0);
	Inheritor_ССountry_second non("Тест2", 332, 76868554, 65856756, 0, 22062012, 1, 1);
	std::cout << (exe > non) << " " << (non > exe) << " " << (exe < non) << " " << (non < exe) << "\n";
	std::cout << "Если, в предудущей строке было выведено следующее, то тест на операторы сравнения пройден: 1 0 0 1 \n";
	if (_CrtDumpMemoryLeaks()) {
		std::cout << "Утечка памяти обнаружена." << "\n";
	}
	else {
		std::cout << "Утечка памяти не обнаружена." << "\n";
	}
	int n;
	std::cin >> n;
}