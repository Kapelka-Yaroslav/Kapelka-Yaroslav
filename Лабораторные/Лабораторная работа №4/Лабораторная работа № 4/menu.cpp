#include "menu.h"
void menu()
{
    setlocale(LC_ALL, "Russian");
    int n = 0, temp_i;
    CMetod dir;
    CCountry firstcountry1("������1", 143, 45745656, 47342362);
    dir.add_el(firstcountry1);
    CCountry firstcountry2("������2", 156, 38567454, 68457458);
    dir.add_el(firstcountry2);
    CCountry firstcountry3("������3", 167, 46357625, 98686453);
    dir.add_el(firstcountry3);
    CCountry firstcountry4("������4", 179, 78567583, 68457458);
    dir.add_el(firstcountry4);
    while (n != 9)
    {
        std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_����_-_-_-_-_-_-_-_-_-_-_-_" << "\n";
        std::cout << "_-_-_-_-_-_-_�������� �������� �����:-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-1 - �������� ������� � ������.-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-2 - �������� ������� � ������ �� �������._-_" << "\n";
        std::cout << "-_-_-_-3 - ������� ������� �� ������.-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-4 - �������� ��� �������� ������.-_-_-_-_-_-" << "\n";
        std::cout << "-_-_-_-5 - ����� ���������� ��������� ��������� ������." << "\n";
        std::cout << "-_-_-_-6 - �������� ������ � ����.-_-_-_-_-_-_-_-_-" << "\n";
        std::cout << "-_-_-_-7 - ������� ������ �� �����.-_-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-8 - ����� ��� ������� � �������� ������� ���� 2 ��� ������ �����." << "\n";
        std::cout << "-_-_-_-9 - ��������� ������ ���������.-_-_-_-_-_-_-" << "\n";
        std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << "\n";
        std::cin >> n;
        if (n == 1)
        {
            CCountry firstcountry5("������6", 323, 93645665, 78767464);
            dir.add_el(firstcountry5);
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
            std::cout << "������ �������" << "\n";
        }
        else if (n == 4)
        {
            dir.print_all();
        }
        else if (n == 5)
        {
            dir.find_to_population_density();
        }
        else if (n == 6)
        {
            dir.write_to_file("text.txt");
        }
        else if (n == 7)
        {
            dir.read_from_file("text.txt");
        }
        else if (n == 8)
        {
            dir.print_all_with_2_or_more_words();
        }
    }
    dir.del_all();
}