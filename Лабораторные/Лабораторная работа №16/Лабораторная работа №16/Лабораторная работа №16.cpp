#include "CCountry.h"
#define _CRTDBG_MAP_ALLOC 

int main() {
    setlocale(LC_ALL, "Russian");
    CCountry* test_ptr;
    test_ptr = new CCountry;
    delete test_ptr;
    test_ptr = new CCountry[2];
    delete[] test_ptr;
    Inheritor_��ountry* test_ptr2;
    test_ptr2 = new Inheritor_��ountry;
    delete test_ptr2;
    test_ptr2 = new Inheritor_��ountry[2];
    delete[] test_ptr2;
    Inheritor_��ountry* test_ptr3;
    test_ptr3 = new Inheritor_��ountry;
    delete test_ptr3;
    test_ptr3 = new Inheritor_��ountry[2];
    delete[] test_ptr3;
    if (_CrtDumpMemoryLeaks()) 
    {
        std::cout << "������ ������ ����������." << "\n";
    }
    else 
    {
        std::cout << "������ ������ �� ����������." << "\n";
    }
}