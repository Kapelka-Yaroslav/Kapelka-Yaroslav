#include "CCountry.h"
#define _CRTDBG_MAP_ALLOC 

int main() {
    setlocale(LC_ALL, "Russian");
    CCountry* test_ptr;
    test_ptr = new CCountry;
    delete test_ptr;
    test_ptr = new CCountry[2];
    delete[] test_ptr;
    Inheritor_ÑÑountry* test_ptr2;
    test_ptr2 = new Inheritor_ÑÑountry;
    delete test_ptr2;
    test_ptr2 = new Inheritor_ÑÑountry[2];
    delete[] test_ptr2;
    Inheritor_ÑÑountry* test_ptr3;
    test_ptr3 = new Inheritor_ÑÑountry;
    delete test_ptr3;
    test_ptr3 = new Inheritor_ÑÑountry[2];
    delete[] test_ptr3;
    if (_CrtDumpMemoryLeaks()) 
    {
        std::cout << "Óòå÷êà ïàìÿòè îáíàðóæåíà." << "\n";
    }
    else 
    {
        std::cout << "Óòå÷êà ïàìÿòè íå îáíàðóæåíà." << "\n";
    }
}