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
        std::cout << "Óòå÷êà ïàìÿòè îáíàðóæåíà." << "\n";
    }
    else
    {
        std::cout << "Óòå÷êà ïàìÿòè íå îáíàðóæåíà." << "\n";
    }
}

void func()
{
    std::vector<CCountry> vect;
    std::auto_ptr<Inheritor_ÑÑountry> aptr(new Inheritor_ÑÑountry);
    std::unique_ptr<CCountry> uptr(new CCountry);
    std::shared_ptr<Inheritor_ÑÑountry_second> sptr(new Inheritor_ÑÑountry_second);
    std::weak_ptr<Inheritor_ÑÑountry_second> wptr = sptr;
    My_ptr<CCountry> myptr(new CCountry);
    vect.push_back(*aptr);
    vect.push_back(*uptr);
    vect.push_back(*sptr);
    vect.push_back(*myptr);
    std::cout << "Äàííûå èç óìíûõ óêàçàòåëåé ïåðåïèñàíû â âåêòîð.\n";
    for (auto el : vect)
    {
        std::cout << el << "\n";
    }
}