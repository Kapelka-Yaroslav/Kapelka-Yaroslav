#include "menu.h"
#define _CRTDBG_MAP_ALLOC 

int main()
{
	setlocale(LC_ALL, "Russian");
	Inheritor_ССountry In("Тест", 123, 45645645, 45756757, 6, 1, 28122009, 1);
	Inheritor_ССountry_second Ins("Тест1", 123, 45645645, 45756757, 6, 1, 28122009, 1);
	count_place_of_birth_citizen c1;
	count_birthday_citizen c2;
	c1(In);
	c2(In);
	c1(Ins);
	c2(Ins);
	std::cout << "Тест на работу функторов будет пройден если на следующей строке будет выведен такой текст: 2 0\n" << c1.count << " " << c2.count << "\n";
	if (_CrtDumpMemoryLeaks())
	{
		std::cout << "Утечка памяти обнаружена." << "\n";
	}
	else 
	{
		std::cout << "Утечка памяти не обнаружена." << "\n";
	}
	int n;
	std::cin >> n;
}