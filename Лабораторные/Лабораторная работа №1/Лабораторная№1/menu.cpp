#include "menu.h"
void menu() 
{
    setlocale(LC_ALL, "Russian");
    int n = 0, temp_i;
    CMetod dir;
    CCountry firstcountry;
    firstcountry.setNumber_of_cities(143);
    firstcountry.setPopulation(32686854);
    firstcountry.setArea(50338346);
    firstcountry.setUnical_index(1);
    dir.add_el(firstcountry);
    firstcountry.setNumber_of_cities(156);
    firstcountry.setPopulation(65745656);
    firstcountry.setArea(56765888);
    firstcountry.setUnical_index(2);
    dir.add_el(firstcountry);
    firstcountry.setNumber_of_cities(587);
    firstcountry.setPopulation(87534345);
    firstcountry.setArea(13254756);
    firstcountry.setUnical_index(3);
    dir.add_el(firstcountry);
    firstcountry.setNumber_of_cities(146);
    firstcountry.setPopulation(38352463);
    firstcountry.setArea(15683556);
    firstcountry.setUnical_index(4);
    dir.add_el(firstcountry);
    while (n != 6) 
    {
        std::cout << "_-_-_-�������� �������� �����:_-_-_-_-_-_-_-_-" << "\n";
        std::cout << "_-1 - �������� ������� � ������.-_-_-_-_-_-_-_" << "\n";
        std::cout << "_-2 - �������� ������� � ������ �� �������.-_-" << "\n";
        std::cout << "_-3 - ������� ������� �� ������.-_-_-_-_-_-_-_" << "\n";
        std::cout << "_-4 - �������� ��� �������� ������.-_-_-_-_-_-" << "\n";
        std::cout << "_-5 - ��������� ������ ���������.-_-_-_-_-_-_-" << "\n";
        std::cin >> n;
        if (n == 1)
        {
            firstcountry.setNumber_of_cities(123);
            firstcountry.setPopulation(64336789);
            firstcountry.setArea(15678078);
            firstcountry.setUnical_index(5);
            dir.add_el(firstcountry);
            (firstcountry);
            std::cout << "������ ���������." << "\n";
        }
        else if (n == 2)
        {
            std::cout << "������� ������ ������ ��������: ";
            std::cin >> temp_i;
            dir.find_to_index(temp_i);
        }
        else if (n == 3)
        {
            std::cout << "������� ����� ���������� �������� (��������� ����������� � 1): ";
            std::cin >> temp_i;
            dir.remove_el(temp_i - 1);
            std::cout << "������ �������";
        }
        else if (n == 4)
        {
            dir.print_all();
        }
        else
            break;
    }
    dir.del_all();
}