#include "menu.h"
#define _CRTDBG_MAP_ALLOC 

int main() {
	setlocale(LC_ALL, "Russian");
	Inheritor_��ountry exe("����1", 121, 35334535, 75757565, 1, 22062012, 1, 0);
	Inheritor_��ountry_second non("����2", 332, 76868554, 65856756, 0, 22062012, 1, 1);
	std::cout << (exe > non) << " " << (non > exe) << " " << (exe < non) << " " << (non < exe) << "\n";
	std::cout << "����, � ���������� ������ ���� �������� ���������, �� ���� �� ��������� ��������� �������: 1 0 0 1 \n";
	if (_CrtDumpMemoryLeaks()) {
		std::cout << "������ ������ ����������." << "\n";
	}
	else {
		std::cout << "������ ������ �� ����������." << "\n";
	}
	int n;
	std::cin >> n;
}