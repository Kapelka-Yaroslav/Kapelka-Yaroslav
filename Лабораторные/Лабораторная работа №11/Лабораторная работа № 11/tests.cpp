#define _CRTDBG_MAP_ALLOC 
#include "Function_class.h"
int main() 
{
	setlocale(LC_ALL, "Russian");
	Function_class<int> f;
	std::cout << "���� ������ ������ ����� ������� ������ � ������ �������, �� ������� ���������� � ������ �������� ���������." << "\n";
		int n = 10;
	f.data = new int* [n];
	f.len = n;
	for (int i = 0; i < f.len; i++) 
	{
		f.data[i] = new int(i + 1);
	}
	f.Sort(1);
	f.print_to_Screen();
	f.Sort(-1);
	f.print_to_Screen();
	for (int i = 0; i < n; i++) 
	{
		delete[] f.data[i];
	}
	delete[] f.data;
	if (_CrtDumpMemoryLeaks()) 
	{
		std::cout << "������ ������ ����������." << "\n";
	}
	else 
	{
		std::cout << "������ ������ �� ����������." << "\n";
	}
	std::cout << "������� ����� ������� ��� ���������� �����." << "\n";
	std::cin >> n;
}