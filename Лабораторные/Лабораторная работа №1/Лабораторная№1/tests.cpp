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
		std::cout << "������ ���� �� ������ �������� � �������� �������� ������ ������� �������." << "\n";
	}
	else 
	{
		std::cout << "������ ���� �� ������ �������� � �������� �������� ������ ��������." << "\n";
	}
	CMetod test_metod;
	test_metod.add_el(firstcountry);
	test_metod.print_all();
	std::cout << "���� ����� ���� ���������� �� ����� �������� ���������� � �� ����� ������ add_el, print_all � get_to_Screen �������� ���������." << "\n";
	test_metod.del_all();
	test_metod.print_all();
	std::cout << "���� ����� ���� ��������� �� ����� �� ���������� ����� ����� �� ������ del_all � remove_el �������� ���������." << "\n";
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