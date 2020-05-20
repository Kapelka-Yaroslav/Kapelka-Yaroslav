#pragma once
#include <iostream>
#include "menu.h"
#define _CRTDBG_MAP_ALLOC 
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "Введите номер, чтобы вызвать тест: 1 - тест родительского класса, 2 - тест класса-наследника." << "\n";
	std::cin >> n;
	if (n == 1)
	{
		CCountry firstcountry("Тест_страна1", 100, 11111111, 22222222, "New_York", 01012001);
		CCountry secondcountry("Тест_страна2", 100, 22222222, 33333333, "New_Vegas", 02022002);
		std::cout << "Тест будет пройден если сейчас на экран будет выведена следующая последовательность: 0 0 1 1 1 - ";
		std::cout << sortTitle(firstcountry, secondcountry) << " " << sortNumber_of_cities(firstcountry, secondcountry) << " " << sortPopulation(firstcountry, secondcountry) << " " << sortArea(firstcountry, secondcountry) << " " << sortCitizen(firstcountry, secondcountry) <<"\n";
	}
	else if (n == 2)
	{
		Inheritor_ССountry firstcountry("Тест_страна1", 100, 11111111, 22222222, "New_York", 01012001, false);
		Inheritor_ССountry secondcountry("Тест_страна2", 100, 22222222, 33333333, "New_Vegas", 02022002, true);
		std::cout << "Тест будет пройден если сейчас на экран будет выведена следующая последовательность: 0 0 1 1 1 1 - ";
		std::cout << sortTitle(firstcountry, secondcountry) << " " << sortNumber_of_cities(firstcountry, secondcountry) << " " << sortPopulation(firstcountry, secondcountry) << " " << sortArea(firstcountry, secondcountry) << " " << sortCitizen(firstcountry, secondcountry) << " " << sortMonarchy(firstcountry, secondcountry) << "\n";
	}
	if (_CrtDumpMemoryLeaks())
	{
		std::cout << "Утечка памяти обнаружена." << "\n";
	}
	else
	{
		std::cout << "Утечка памяти не обнаружена." << "\n";
	}
	int t;
	std::cin >> t;
}