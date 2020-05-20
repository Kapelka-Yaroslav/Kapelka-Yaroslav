#pragma once
#include <iostream>
#include "menu.h"
#define _CRTDBG_MAP_ALLOC 

int main()
{
	setlocale(LC_ALL, "Russian");
	CCountry firstcountry;
	firstcountry.setNumber_of_cities(100);
	firstcountry.setPopulation(20000000);
	firstcountry.setArea(32000000);
	firstcountry.setUnical_index(19);
	if ((firstcountry.getNumber_of_cities() == 100) && (firstcountry.getPopulation() == 20000000) && (firstcountry.getArea() == 32000000) && (firstcountry.getUnical_index() == 19))
	{
		std::cout << "Первый тест на работу геттеров и сеттеров базового класса пройден успешно." << "\n";
	}
	else 
	{
		std::cout << "Первый тест на работу геттеров и сеттеров базового класса провален." << "\n";
	}
	CMetod test_metod;
	test_metod.add_el(firstcountry);
	test_metod.print_all();
	std::cout << "Если перед этим сообщением на экран вывелась информация о то файле методы add_el, print_all и get_to_Screen работают корректно." << "\n";
	test_metod.del_all();
	test_metod.print_all();
	std::cout << "Если перед этим сообщение на экран не выводились новые числа то методы del_all и remove_el работают корректно." << "\n";
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