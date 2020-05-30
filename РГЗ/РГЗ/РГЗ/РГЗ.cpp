#include <iostream>
#include "menu.h"
#define _CRTDBG_MAP_ALLOC 

int main()
{
    menu(); /// Функция меню. 
    if (_CrtDumpMemoryLeaks()) /// Проверка на утечку памяти.
    {
        std::cout << "Утечка памяти обнаружена." << "\n";
    }
    else
    {
        std::cout << "Утечка памяти не обнаружена." << "\n";
    }
}