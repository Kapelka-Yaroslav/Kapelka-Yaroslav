#pragma once
// Лабораторная работа 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "menu.h"
#define _CRTDBG_MAP_ALLOC 

int main() 
{
    menu();
    if (_CrtDumpMemoryLeaks()) 
    {
        std::cout << "Утечка памяти обнаружена." << "\n";
    }
    else 
    {
        std::cout << "Утечка памяти не обнаружена." << "\n";
    }
}