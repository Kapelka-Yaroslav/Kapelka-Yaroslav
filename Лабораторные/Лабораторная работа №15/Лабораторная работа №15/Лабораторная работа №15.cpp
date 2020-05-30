#include "CCountry.h"
#include "My_pointer_class.h"
#include <memory>
#define _CRTDBG_MAP_ALLOC 

void func();

int main()
{
    setlocale(LC_ALL, "Russian");
    func();
    if (_CrtDumpMemoryLeaks())
    {
        std::cout << "������ ������ ����������." << "\n";
    }
    else
    {
        std::cout << "������ ������ �� ����������." << "\n";
    }
}

void func()
{
    std::vector<CCountry> vect;
    std::auto_ptr<Inheritor_��ountry> aptr(new Inheritor_��ountry);
    std::unique_ptr<CCountry> uptr(new CCountry);
    std::shared_ptr<Inheritor_��ountry_second> sptr(new Inheritor_��ountry_second);
    std::weak_ptr<Inheritor_��ountry_second> wptr = sptr;
    My_ptr<CCountry> myptr(new CCountry);
    vect.push_back(*aptr);
    vect.push_back(*uptr);
    vect.push_back(*sptr);
    vect.push_back(*myptr);
    std::cout << "������ �� ����� ���������� ���������� � ������.\n";
    for (auto el : vect)
    {
        std::cout << el << "\n";
    }
}