#pragma once
#include <iostream>
#include "menu.h"
#define _CRTDBG_MAP_ALLOC 
int main()
{
	setlocale(LC_ALL, "Russian");
	CCountry firstcountry("����_������1", 100, 11111111, 22222222, "New_York", 01012001);
	CCountry secondcountry("����_������2", 100, 22222222, 33333333, "New_Vegas", 02022002);
	std::cout << "���� ����� ������� ���� ������ �� ����� ����� �������� ��������� ������������������: 0 0 1 1 1 - ";
	std::cout << sortTitle(firstcountry, secondcountry) << " " << sortNumber_of_cities(firstcountry, secondcountry) << " " << sortPopulation(firstcountry, secondcountry) << " " << sortArea(firstcountry, secondcountry) << " " << sortCitizen(firstcountry, secondcountry);
	std::cout << "\n";
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