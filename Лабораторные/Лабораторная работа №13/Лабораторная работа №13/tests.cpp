#include "menu.h"
#define _CRTDBG_MAP_ALLOC 

int main()
{
	setlocale(LC_ALL, "Russian");
	Inheritor_��ountry In("����", 123, 45645645, 45756757, 6, 1, 28122009, 1);
	Inheritor_��ountry_second Ins("����1", 123, 45645645, 45756757, 6, 1, 28122009, 1);
	count_place_of_birth_citizen c1;
	count_birthday_citizen c2;
	c1(In);
	c2(In);
	c1(Ins);
	c2(Ins);
	std::cout << "���� �� ������ ��������� ����� ������� ���� �� ��������� ������ ����� ������� ����� �����: 2 0\n" << c1.count << " " << c2.count << "\n";
	if (_CrtDumpMemoryLeaks())
	{
		std::cout << "������ ������ ����������." << "\n";
	}
	else 
	{
		std::cout << "������ ������ �� ����������." << "\n";
	}
	int n;
	std::cin >> n;
}