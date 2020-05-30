#include "menu.h"
void menu()
{
    setlocale(LC_ALL, "Russian"); /// ����������� �������. 
    int n = 0, temp_i;
    int m;
    CMetod dir;
    std::ifstream f("text.txt");
    std::ofstream d;
    f >> dir;
    f.close();
    int c;
    while (n != 9)
    {
        std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_����_-_-_-_-_-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << "\n";
        std::cout << "_-_-_-_-_-_-_�������� �������� �����:-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-1 - �������� ������� � ������.-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-2 - ������� ������� �� ������.-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-3 - �������� ��� �������� ������.-_-_-_-_-_-" << "\n";
        std::cout << "-_-_-_-4 - ����� ���������� ��������� ��������� ������." << "\n";
        std::cout << "-_-_-_-5 - �������� ������ � ����.-_-_-_-_-_-_-_-_-" << "\n";
        std::cout << "-_-_-_-6 - ������� ������ �� �����.-_-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-7 - ����� ��� ������� � �������� ������� ���� 2 ��� ������ �����." << "\n";
        std::cout << "-_-_-_-8 - ������������� ������.-_-_-_-_-_-_-_-_-_-" << "\n";
        std::cout << "-_-_-_-9 - ��������� ������ ���������.-_-_-_-_-_-_-" << "\n";
        std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << "\n";
        std::cin >> n;
        if (n == 1)
        {
            dir.find_to_str_by_file("\"������5\" 323 23345345 45345533 1 24112001 1");
            std::cout << "������ ���������." << "\n";
        }
        else if (n == 2)
        {
            std::cout << "������� ����� ���������� �������� (��������� ����������� � 1): ";
            std::cin >> temp_i;
            dir.remove_el(temp_i - 1);
            std::cout << "������ �������." << "\n";
        }
        else if (n == 3)
        {
            std::cout << dir;
        }
        else if (n == 4)
        {
            dir.find_to_population_density();
        }
        else if (n == 5)
        {
            d.open("text.txt");
            d << dir;
            d.close();
        }
        else if (n == 6)
        {
            f.open("text.txt");
            f >> dir;
            f.close();
        }
        else if (n == 7)
        {
            dir.print_all_with_2_or_more_words();
        }
        else if (n == 8)
        {
            std::cout << "������� ����� ��������, �� �������� ������ ������������� ������: 1 � title, 2 � number_of_cities, 3 � population, 4 � area, 5 � citizen." << "\n";
            std::cin >> c;
            if (c == 1)
            {
                dir.sort(sortTitle);
            }
            else if (c == 2)
            {
                dir.sort(sortNumber_of_cities);
            }
            else if (c == 3)
            {
                dir.sort(sortPopulation);
            }
            else if (c == 4)
            {
                dir.sort(sortArea);
            }
            else if (c == 5)
            {
                dir.sort(sortCitizen);
            }
            else
            {
                std::cout << "������������ �����." << "\n";
                n = 0;
                break;
            }
        }
    }
    dir.del_all();
}