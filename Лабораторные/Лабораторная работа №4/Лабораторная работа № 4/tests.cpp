#pragma once
#include <iostream>
#include "menu.h"
#define _CRTDBG_MAP_ALLOC 
int main()
{
	setlocale(LC_ALL, "Russian");
	CCountry firstcountry6("Страна0", 200, 2000000, 10000000);
	if ((firstcountry6.getNumber_of_cities() == 200) && (firstcountry6.getPopulation() == 2000000) && (firstcountry6.getArea() == 10000000))
	{
		std::cout << "Первый тест на работу геттеров и сеттеров базового класса пройден успешно." << "\n";
	}
	else
	{
		std::cout << "Первый тест на работу геттеров и сеттеров базового класса провален." << "\n";
	}
	CMetod test_metod;
	test_metod.add_el(firstcountry6);
	test_metod.print_all();
	std::cout << "Если перед этим сообщением на экран вывелась информация о то файле методы add_el, print_all и get_to_Screen работают корректно." << "\n";
	test_metod.del_all();
	test_metod.find_to_population_density();
	test_metod.print_all();
	std::cout << "Если перед этим сообщение на экран не выводились новые числа то методы find_to_population_density, del_all и remove_el работают корректно." << "\n";
	test_metod.read_from_file("text.txt");
	test_metod.print_all();
	std::cout << "Если перед этим сообщением на экран вывелась информация о файлах, то методы read_from_file и get_str_by_file работают правильно." << "\n";
	test_metod.add_el(firstcountry6);
	test_metod.write_to_file("text.txt");
	test_metod.read_from_file("text.txt");
	test_metod.print_all();
	std::cout << "Если перед этим сообщением на экран вывелась информация о всех предыдущих файлах и одном новом, то метод write_to_file работает правильно." << "\n";
	test_metod.print_all_with_2_or_more_words();
	std::cout << "Если перед этим сообщением на экран вывелась информация о двух файлах с названиями из двух слов, то метод выводы информации о файлах с названиями из двух слов работает верно. " << "\n";
	test_metod.read_from_file("Test.txt");
	test_metod.print_all();
	std::cout << "Если перед этим сообщением на экран вывелась информация о тестовом файле и больше ни о каких других, то проверка данных о файле в методе получения файла из строки работает верно." << "\n";
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