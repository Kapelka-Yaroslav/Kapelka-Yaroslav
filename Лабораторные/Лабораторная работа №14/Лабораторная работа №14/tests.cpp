#include "menu.h"
#define _CRTDBG_MAP_ALLOC 

int main() {
	setlocale(LC_ALL, "Russian");
	Inheritor_ССountry In("Тест1", 123, 45645645, 45756757, 6, 1, 28122009, 1);
	Inheritor_ССountry_second Ins("Тест2", 321, 46456464, 56756755, 7, 0, 15052006, 0);
	sort_by s1(1);
	sort_by s2(2);
	sort_by s3(3);
	sort_by s4(4);
	sort_by s5(5);
	sort_by s6(6);
	sort_by s7(7);
	sort_by s8(8);
	sort_by s9(9);
	sort_by s10(10);
	sort_by s11(11);
	sort_by s12(12);
	sort_by s13(13);
	sort_by s14(14);
	std::cout << "Тест на работу функтора будет пройден если на следующей строке будет выведен такой текст: 0 0 0 1 1 0 0 1 1 1 0 0 0 1\n" << s1(In, Ins) << " " << s2(In, Ins) << " " << s3(In, Ins) << " " << s4(In, Ins) << " " << s5(In, Ins) << " " << s6(In, Ins) << " " << s7(In, Ins) << " " << s8(In, Ins) << " " << s9(In, Ins) << " " << s10(In, Ins) << " " << s11(In, Ins) << " " << s12(In, Ins) << " " << s13(In, Ins) << " " << s14(In, Ins) << "\n";
	if (_CrtDumpMemoryLeaks()) {
		std::cout << "Утечка памяти обнаружена." << "\n";
	}
	else {
		std::cout << "Утечка памяти не обнаружена." << "\n";
	}
	int n;
	std::cin >> n;
}