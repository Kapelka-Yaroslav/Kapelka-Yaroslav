#pragma once
// ������������ ������ 1.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <iostream>
#include "menu.h"
#define _CRTDBG_MAP_ALLOC 

int main() 
{
    menu();
    if (_CrtDumpMemoryLeaks()) 
    {
        std::cout << "������ ������ ����������." << "\n";
    }
    else 
    {
        std::cout << "������ ������ �� ����������." << "\n";
    }
}