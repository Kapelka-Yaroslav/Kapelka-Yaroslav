#pragma once
#include <iostream>
#include "menu.h"
#define _CRTDBG_MAP_ALLOC 
int main()
{
	setlocale(LC_ALL, "Russian");
	CCountry firstcountry6("������0", 200, 2000000, 10000000, 1);
	if ((firstcountry6.getNumber_of_cities() == 200) && (firstcountry6.getPopulation() == 2000000) && (firstcountry6.getArea() == 10000000))
	{
		std::cout << "������ ���� �� ������ �������� � �������� �������� ������ ������� �������." << "\n";
	}
	else
	{
		std::cout << "������ ���� �� ������ �������� � �������� �������� ������ ��������." << "\n";
	}
	CMetod test_metod;
	test_metod.add_el(firstcountry6);
	test_metod.print_all();
	std::cout << "���� ����� ���� ���������� �� ����� �������� ���������� � �� ����� ������ add_el, print_all � get_to_Screen �������� ���������." << "\n";
	test_metod.del_all();
	test_metod.find_to_population_density();
	test_metod.print_all();
	std::cout << "���� ����� ���� ��������� �� ����� �� ���������� ����� ����� �� ������ find_to_population_density, del_all � remove_el �������� ���������." << "\n";
	test_metod.write_to_file("text.txt");
	test_metod.read_from_file("text.txt");
	std::cout << "���� ����� ���� ��������� �� ����� �� ���������� ����� ����� �� ������ write_to_file � read_from_file �������� ���������." << "\n";
	if (_CrtDumpMemoryLeaks())
	{
		std::cout << "������ ������ ����������." << "\n";
	}
	else
	{
		std::cout << "������ ������ �� ����������." << "\n";
	}
	int t;
	std::cin >> t;
}