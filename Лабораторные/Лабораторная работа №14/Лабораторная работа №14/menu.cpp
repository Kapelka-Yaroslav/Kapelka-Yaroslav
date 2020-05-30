#include "menu.h"
void old_menu()
{
    setlocale(LC_ALL, "Russian"); /// ����������� �������. 
    int n = 0, temp_i;
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
            dir.find_to_str_by_file("_ ������5_ 323 93645665 78767464 1 24112001 0 1");
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

void menu()
{
    setlocale(LC_ALL, "Russian");
    int n, w;
    std::cout << "�������� � ����� ����� ���������� ����� �������� ��������� �� ���� ���: " << "\n";
    std::cout << "1 - vector" << "\n";
    std::cout << "2 - list" << "\n";
    std::cout << "3 - map" << "\n";
    std::cout << "4 - set" << "\n";
    std::cout << "������� ����� ��������������� ������������ ����������: ";
    std::cin >> n;
    if (n == 1)
    {
        int q = 0;
        std::vector<CCountry> vector;
        Inheritor_��ountry Intemp;
        Inheritor_��ountry_second Instemp;
        std::ifstream fin("text.txt");
        while (fin >> n)
        {
            if (n == 1)
            {
                fin >> Intemp;
                vector.push_back(Intemp);
                vector[q].setUnical_index(q);
            }
            else
            {
                fin >> Instemp;
                vector.push_back(Instemp);
                vector[q].setUnical_index(q);
            }
            q++;
        }
        fin.close();
        std::cout << "������ ������� �� ����� � ������.\n";
        while (true)
        {
            std::cout << "�������� ���������� ��������: " << "\n";
            std::cout << "1 - ������� ������ �� �����.\n";
            std::cout << "2 - ������� ������ �� ����� � ������.\n";
            std::cout << "3 - �������� ������� � ������.\n";
            std::cout << "4 - ������� ������� �� ������� �� �������.\n";
            std::cout << "5 - ������� ���� ������� ������� �� �������.\n";
            std::cout << "6 - ��������� ���������� ��������� � �������� ����������.\n";
            std::cout << "7 - ������� ��� �������� � �������� ����������.\n";
            std::cout << "8 - ���������� ������� �� ��������� ���������.\n";
            std::cout << "9 - ������� ������ �� ����� � ����� ������ � ���������� 2 �������.\n";
            std::cout << "10 - ��������� ������ ���������.\n";
            std::cout << "������� �����, ��� ������������� ������������ ��������: ";
            std::cin >> n;
            if (n == 1)
            {
                std::cout << "��� ������ �������: \n";
                for (int i = 0; i < q; i++)
                {
                    std::cout << vector[i] << "\n";
                }
            }
            else if (n == 2)
            {
                vector.clear();
                fin.open("text.txt");
                q = 0;
                while (fin >> w)
                {
                    if (n == 1)
                    {
                        fin >> Intemp;
                        vector.push_back(Intemp);
                        vector[q].setUnical_index(q);
                    }
                    else
                    {
                        fin >> Instemp;
                        vector.push_back(Instemp);
                        vector[q].setUnical_index(q);
                    }
                    q++;
                }
                fin.close();
                std::cout << "������ ������� �� ����� � ������.\n";
            }
            else if (n == 3)
            {
                Inheritor_��ountry_second Ins("������0", 123, 45645645, 45756757, 6, 1, 28122009, 1);
                vector.push_back(Ins);
                vector[q].setUnical_index(q);
                q++;
                std::cout << "������� �������� � ������.\n";
            }
            else if (n == 4)
            {
                std::cout << "������� ������ ���������� ��������: ";
                std::cin >> w;
                if (w < q)
                {
                    for (int i = w; i < (q - 1); i++)
                    {
                        vector[i] = vector[i + 1];
                        vector[i].setUnical_index(i);
                    }
                    vector.pop_back();
                    q--;
                    std::cout << "������� � ������ �������� ����� �� �������.\n";
                }
                else
                {
                    std::cout << "������� ���������� ������.\n";
                }
            }
            else if (n == 5)
            {
                std::cout << "������� ������ ������� ��������:";
                std::cin >> w;
                if (w < q)
                {
                    std::cout << "��� ������ � �������� � ������ ��������:\n";
                    std::cout << vector[w] << "\n";
                }
                else
                {
                    std::cout << "������� ���������� ������.\n";
                }
            }
            else if (n == 6)
            {
                std::cout << "�������� ��������, �������� � ������� ����� ��������� : \n";
                std::cout << "1 - ����� �������� ������ ������.\n";
                std::cout << "2 - ���� �������� ������ ������.\n";
                std::cout << "������� �������� ��������������� ������� ���������: ";
                std::cin >> n;
                if (n == 1) {
                    count_place_of_birth_citizen c = std::for_each(vector.begin(), vector.end(), count_place_of_birth_citizen());
                    std::cout << "������� " << c.count << " ��������� � �������� ����������.\n";
                }
                else if (n == 2) {
                    count_birthday_citizen c = std::for_each(vector.begin(), vector.end(), count_birthday_citizen());
                    std::cout << "������� " << c.count << " ��������� � �������� ����������.\n";
                }
                else
                {
                    std::cout << "������ ��������� ���.\n";
                }
            }
            else if (n == 7)
            {
                std::cout << "�������� ��������, �������� � ������� ����� �������� �� �����: \n";
                std::cout << "1 - ����� �������� ������ ������.\n";
                std::cout << "2 - ���� �������� ������ ������.\n";
                std::cout << "������� �������� ��������������� ������� ���������: ";
                std::cin >> n;
                if (n == 1)
                {
                    std::cout << "��� ������ � ��������� � �������� ���������������:\n";
                    std::for_each(vector.begin(), vector.end(), print_place_of_birth_citizen);
                }
                else if (n == 2)
                {
                    std::cout << "��� ������ � ��������� � �������� ���������������:\n";
                    std::for_each(vector.begin(), vector.end(), print_birthday_citizen);
                }
                else
                {
                    std::cout << "������ ��������� ���.\n";
                }
            }
            else if (n == 8)
            {
                std::cout << "�������� �������� �� �������� �������� ����� �������������: \n";
                std::cout << "1 - �������� �����.\n";
                std::cout << "2 - ���������� ������� � �������.\n";
                std::cout << "3 - ��������� �����.\n";
                std::cout << "4 - ������� �����.\n";
                std::cout << "5 - ������ �����.\n";
                std::cout << "6 - ����� �������� ������� ����� �����.\n";
                std::cout << "7 - ���� �������� ������� ����� �����.\n";
                std::cout << "������� �������� ��������������� ������� ���������: ";
                std::cin >> n;
                if (n == 1)
                {
                    std::cout << "��������, ����� ������ ����� :  � ��������� � ��������� ������� (1) ��� � ���������, �������� ����������� ������� (2): ";
                    std::cin >> n;
                    if (n == 1)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(1));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(8));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 2)
                {
                    std::cout << "��������, ��� ����� ������������� ���������� ������� � �����: �� �������� (1) ��� �� ����������� (2): ";
                    std::cin >> n;
                    if (n == 1)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(2));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2) 
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(9));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 3)
                {
                    std::cout << "��������, ��� ����� ������������� ��������� � �����: �� �������� (1) ��� �� ����������� (2): ";
                    std::cin >> n;
                    if (n == 1)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(3));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(10));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 4)
                {
                    std::cout << "��������, ��� ����� ������������� ������� � �����: �� ����������� (1) ��� �� �������� (2): ";
                    std::cin >> n;
                    if (n == 1)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(4));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(11));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 5)
                {
                    std::cout << "��������, ��� ����� ������������ ������ � �����: �� �������� (1) ��� �� ����������� (2): ";
                    std::cin >> n;
                    if (n == 1)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(5));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(12));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 6)
                {
                    std::cout << "��������, ��� ����� ������������� ����� �������� ������� ������� �����: �� ����������� (1) ��� �� �������� (2): ";
                    std::cin >> n;
                    if (n == 1)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(6));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(13));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 7)
                {
                    std::cout << "��������, ��� ����� ������������� ���� �������� ������� ������� �����: �� ����������� (1) ��� �� �������� (2): ";
                    std::cin >> n;
                    if (n == 1)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(7));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2)
                    {
                        std::sort(vector.begin(), vector.end(), sort_by(14));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else 
                {
                    std::cout << "������ �������� ���.\n";
                }
            }
            else if (n == 9) 
            {
                std::vector<CCountry> tempv;
                fin.open("text.txt");
                int r = 0;
                while (fin >> w) 
                {
                    if (w == 1) 
                    {
                        fin >> Intemp;
                        tempv.push_back(Intemp);
                        tempv[r].setUnical_index(r);
                    }
                    else 
                    {
                        fin >> Instemp;
                        tempv.push_back(Instemp);
                        tempv[r].setUnical_index(r);
                    }
                    r++;
                }
                for (int i = r - 1; !(i < 0); i--) 
                {
                    vector.push_back(tempv[i]);
                    vector[q].setUnical_index(q);
                    q++;
                    tempv.pop_back();
                }
                std::cout << "������ ������� �� ����� � ������. � ��� ������� ����������.\n";
            }
            else
            {
                break;
            }
        }
    }
    else if (n == 2)
    {
        bool check;
        std::string title;
        std::list<CCountry> list;
        Inheritor_��ountry Intemp;
        Inheritor_��ountry_second Instemp;
        std::ifstream fin("text.txt");
        while (fin >> n)
        {
            if (n == 1)
            {
                fin >> Intemp;
                list.push_back(Intemp);
            }
            else
            {
                fin >> Instemp;
                list.push_back(Instemp);
            }
        }
        fin.close();
        std::cout << "������ ������� �� ����� � ������.\n";
        while (true)
        {
            std::cout << "�������� ���������� ��������: " << "\n";
            std::cout << "1 - ������� ������ �� �����.\n";
            std::cout << "2 - ������� ������ �� ����� � ������.\n";
            std::cout << "3 - �������� ������� � ������.\n";
            std::cout << "4 - ������� ������� �� ������� �� �������.\n";
            std::cout << "5 - ������� ���� ������� ������� �� �������.\n";
            std::cout << "6 - ��������� ���������� ��������� � �������� ����������.\n";
            std::cout << "7 - ������� ��� �������� � �������� ����������.\n";
            std::cout << "8 - ������������� ������ �� ��������� ���������.\n";
            std::cout << "9 - ��������� ������ ���������.\n";
            std::cout << "������� �����, ��� ������������� ������������ ��������: ";
            std::cin >> n;
            if (n == 1)
            {
                std::cout << "��� ������ ������: \n";
                std::copy(list.begin(), list.end(), std::ostream_iterator<CCountry>(std::cout, " \n"));
            }
            else if (n == 2)
            {
                list.clear();
                fin.open("text.txt");
                while (fin >> n)
                {
                    if (n == 1)
                    {
                        fin >> Intemp;
                        list.push_back(Instemp);
                    }
                    else
                    {
                        fin >> Instemp;
                        list.push_back(Instemp);
                    }
                }
                fin.close();
                std::cout << "������ ������� �� ����� � ������.\n";
            }
            else if (n == 3)
            {
                Inheritor_��ountry_second Ins("������0", 123, 45645645, 45756757, 6, 1, 28122009, 1);
                list.push_back(Ins);
                std::cout << "������� �������� � ������.\n";
            }
            else if (n == 4)
            {
                std::cout << "������� �������� ���������� ��������: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                check = false;
                for (auto element : list)
                {
                    if (element.getTitle() == title)
                    {
                        list.remove(element);
                        check = true;
                        break;
                    }
                }
                if (check)
                {
                    std::cout << "������� �����.\n";
                }
                else
                {
                    std::cout << "������ �������� ���.\n";
                }
            }
            else if (n == 5)
            {
                std::cout << "������� �������� ������� ��������: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                check = true;
                for (auto element : list)
                {
                    if (element.getTitle() == title)
                    {
                        std::cout << "��� ������ �������: ";
                        std::cout << element << "\n";
                        check = false;
                        break;
                    }
                }
                if (check)
                {
                    std::cout << "������ �������� ���.\n";
                }
            }
            else if (n == 6)
            {
                std::cout << "�������� ��������, �������� � ������� ����� ��������� : \n";
                std::cout << "1 - ����� �������� ������ ������.\n";
                std::cout << "2 - ���� �������� ������ ������.\n";
                std::cout << "������� �������� ��������������� ������� ���������: ";
                std::cin >> n;
                if (n == 1) {
                    count_place_of_birth_citizen c = std::for_each(list.begin(), list.end(), count_place_of_birth_citizen());
                    std::cout << "������� " << c.count << " ��������� � �������� ����������.\n";
                }
                else if (n == 2) {
                    count_birthday_citizen c = std::for_each(list.begin(), list.end(), count_birthday_citizen());
                    std::cout << "������� " << c.count << " ��������� � �������� ����������.\n";
                }
                else
                {
                    std::cout << "������ ��������� ���.\n";
                }
            }
            else if (n == 7)
            {
                std::cout << "�������� ��������, �������� � ������� ����� �������� �� �����: \n";
                std::cout << "1 - ����� �������� ������ ������.\n";
                std::cout << "2 - ���� �������� ������ ������.\n";
                std::cout << "������� �������� ��������������� ������� ���������: ";
                std::cin >> n;
                if (n == 1)
                {
                    std::cout << "��� ������ � ��������� � �������� ���������������:\n";
                    std::for_each(list.begin(), list.end(), print_place_of_birth_citizen);
                }
                else if (n == 2)
                {
                    std::cout << "��� ������ � ��������� � �������� ���������������:\n";
                    std::for_each(list.begin(), list.end(), print_birthday_citizen);
                }
                else
                {
                    std::cout << "������ ��������� ���.\n";
                }
            }
            else if (n == 8) 
            {
                std::cout << "�������� �������� �� �������� �������� ����� �������������: \n";
                std::cout << "1 - �������� �����.\n";
                std::cout << "2 - ���������� ������� � �������.\n";
                std::cout << "3 - ��������� �����.\n";
                std::cout << "4 - ������� �����.\n";
                std::cout << "5 - ������ �����.\n";
                std::cout << "6 - ����� �������� ������� ����� �����.\n";
                std::cout << "7 - ���� �������� ������� ����� �����.\n";
                std::cout << "������� �������� ��������������� ������� ���������: ";
                std::cin >> n;
                if (n == 1) 
                {
                    std::cout << "��������, ����� ������ ����� :  � ��������� � ��������� ������� (1) ��� � ���������, �������� ����������� ������� (2): ";
                    std::cin >> n;
                    if (n == 1)
                    {
                        list.sort(sort_by(1));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2) 
                    {
                        list.sort(sort_by(8));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 2) 
                {
                    std::cout << "��������, ��� ����� ������������� ���������� ������� � ����� : �� ��������(1) ��� �� �����������(2) : ";
                    std::cin >> n;
                    if (n == 1)
                    {
                        list.sort(sort_by(2));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2)
                    {
                        list.sort(sort_by(9));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 3) 
                {
                    std::cout << "��������, ��� ����� ������������� ��������� � �����: �� �������� (1) ��� �� ����������� (2): ";
                    std::cin >> n;
                    if (n == 1) 
                    {
                        list.sort(sort_by(3));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2) 
                    {
                        list.sort(sort_by(10));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else 
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 4)
                {
                    std::cout << "��������, ��� ����� ������������� ������� � �����: �� ����������� (1) ��� �� �������� (2): ";
                    std::cin >> n;
                    if (n == 1) 
                    {
                        list.sort(sort_by(4));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2) 
                    {
                        list.sort(sort_by(11));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else 
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 5) 
                {
                    std::cout << "��������, ��� ����� ������������ ������ � �����: �� �������� (1) ��� �� ����������� (2): ";
                    std::cin >> n;
                    if (n == 1) 
                    {
                        list.sort(sort_by(5));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2) 
                    {
                        list.sort(sort_by(12));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else 
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 6) 
                {
                    std::cout << "��������, ��� ����� ������������� ����� �������� ������� ������� �����: �� ����������� (1) ��� �� �������� (2): ";
                    std::cin >> n;
                    if (n == 1)
                    {
                        list.sort(sort_by(6));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2) 
                    {
                        list.sort(sort_by(13));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else 
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else if (n == 7)
                {
                    std::cout << "��������, ��� ����� ������������� ���� �������� ������� ������� �����: �� ����������� (1) ��� �� �������� (2): ";
                    std::cin >> n;
                    if (n == 1)
                    {
                        list.sort(sort_by(7));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else if (n == 2)
                    {
                        list.sort(sort_by(14));
                        std::cout << "������ ������������ �� ��������� ��������.\n";
                    }
                    else
                    {
                        std::cout << "������ �������� ���.\n";
                    }
                }
                else
                {
                    std::cout << "������ �������� ���.\n";
                }
            }
            else
            {
                break;
            }
        }
    }
    else if (n == 3)
    {
        int q = 0;
        bool check;
        std::map<int, CCountry> mp;
        Inheritor_��ountry Intemp;
        Inheritor_��ountry_second Instemp;
        std::ifstream file("text.txt");
        while (file >> n)
        {
            if (n == 1)
            {
                file >> Intemp;
                mp.insert(std::pair<int, CCountry>(q++, Intemp));
            }
            else
            {
                file >> Instemp;
                mp.insert(std::pair<int, CCountry>(q++, Instemp));
            }
        }
        file.close();
        std::cout << "������ ������� �� ����� � ���������.\n";
        while (true)
        {
            std::cout << "�������� ���������� ��������: " << "\n";
            std::cout << "1 - ������� ������ �� �����.\n";
            std::cout << "2 - ������� ������ �� ����� � ������.\n";
            std::cout << "3 - �������� ������� � ������.\n";
            std::cout << "4 - ������� ������� �� ������� �� �������.\n";
            std::cout << "5 - ������� ���� ������� ������� �� �������.\n";
            std::cout << "6 - ��������� ���������� ��������� � �������� ����������.\n";
            std::cout << "7 - ������� ��� �������� � �������� ����������.\n";
            std::cout << "8 - ������� ������ �� ����� � ����� ��������� � ���������� ����������.\n";
            std::cout << "9 - ��������� ������ ���������.\n";
            std::cout << "������� �����, ��� ������������� ������������ ��������: ";
            std::cin >> n;
            if (n == 1)
            {
                std::cout << "��� ������ ������ ����������: \n";
                for (auto element : mp)
                {
                    std::cout << element.first << " : " << element.second << "\n";
                }
            }
            else if (n == 2)
            {
                mp.clear();
                file.open("text.txt");
                while (file >> n)
                {
                    if (n == 1)
                    {
                        file >> Intemp;
                        mp.insert(std::pair<int, CCountry>(q++, Intemp));
                    }
                    else
                    {
                        file >> Instemp;
                        mp.insert(std::pair<int, CCountry>(q++, Instemp));
                    }
                }
                file.close();
                std::cout << "������ ������� �� ����� � ���������.\n";
            }
            else if (n == 3)
            {
                Inheritor_��ountry_second non("������0", 123, 45645645, 45756757, 6, 1, 28122009, 1);
                mp.insert(std::pair<int, CCountry>(q++, non));
                std::cout << "������� �������� � ���������.\n";
            }
            else if (n == 4)
            {
                std::cout << "������� �������� ���� ���������� ��������: ";
                std::cin >> w;
                check = false;
                for (auto element : mp)
                {
                    if (element.first == w)
                    {
                        mp.erase(w);
                        check = true;
                        break;
                    }
                }
                if (check)
                {
                    std::cout << "������� ����� �� ����������.\n";
                }
                else
                {
                    std::cout << "�������� ����.\n";
                }
            }
            else if (n == 5)
            {
                std::cout << "������� �������� ���� ������� ��������: ";
                std::cin >> w;
                check = true;;
                for (auto element : mp)
                {
                    if (element.first == w)
                    {
                        std::cout << "��� ������ ������� ��������: " << element.second << "\n";
                        check = false;
                        break;
                    }
                }
                if (check)
                {
                    std::cout << "�������� ����.\n";
                }
            }
            else if (n == 6)
            {
                std::cout << "�������� �������� �������� � ������� ����� ���������: \n";
                std::cout << "1 - ����� �������� ������ ������.\n";
                std::cout << "2 - ���� �������� ������ ������.\n";
                std::cout << "������� �������� ��������������� ������� ���������: ";
                std::cin >> n;
                if (n == 1)
                {
                    ccount_place_of_birth_citizen c = std::for_each(mp.begin(), mp.end(), ccount_place_of_birth_citizen());
                    std::cout << "������� " << c.count << " ��������� � �������� ����������.\n";
                }
                else if (n == 2)
                {
                    ccount_birthday_citizen c = std::for_each(mp.begin(), mp.end(), ccount_birthday_citizen());
                    std::cout << "������� " << c.count << " ��������� � �������� ����������.\n";
                }
                else
                {
                    std::cout << "������ ��������� ���.\n";
                }
            }
            else if (n == 7)
            {
                std::cout << "�������� �������� �������� � ������� ����� �������� �� �����: \n";
                std::cout << "1 - ����� �������� ������ ������.\n";
                std::cout << "2 - ���� �������� ������ ������.\n";
                std::cout << "������� �������� ��������������� ������� ���������: ";
                std::cin >> n;
                if (n == 1)
                {
                    std::cout << "��� ������ � ��������� � �������� ���������������:\n";
                    std::for_each(mp.begin(), mp.end(), pprint_place_of_birth_citizen);
                }
                else if (n == 2)
                {
                    std::cout << "��� ������ � ��������� � �������� ���������������:\n";
                    std::for_each(mp.begin(), mp.end(), pprint_birthday_citizen);
                }
                else
                {
                    std::cout << "������ ��������� ���.\n";
                }
            }
            else if (n == 8) 
{
                std::multimap<int, CCountry> tempm;
                int k = 0;
                file.open("text.txt");
                while (file >> n) 
                {
                    if (n == 1) 
                    {
                        file >> Intemp;
                        tempm.insert(std::pair<int, CCountry>(k++, Intemp));
                    }
                    else {
                        file >> Instemp;
                        tempm.insert(std::pair<int, CCountry>(k++, Instemp));
                    }
                }
                file.close();
                for (auto el : tempm)
                {
                    check = true;
                    for (auto le : mp) 
                    {
                        if (el == le)
                        {
                            check = false;
                        }
                    }
                    if (check)
                    {
                        mp.insert(el);
                    }
                }
                std::cout << "������ ������� �� ����� � �������������� ���������. �����, �������� � �������������� ���������� ����������.\n";
            }
            else
            {
                break;
            }
        }
    }
    else if (n == 4)
    {
        bool check;
        std::string title;
        std::set<CCountry> st;
        Inheritor_��ountry Intemp;
        Inheritor_��ountry_second Instemp;
        std::ifstream file("text.txt");
        while (file >> n)
        {
            if (n == 1)
            {
                file >> Intemp;
                st.insert(Intemp);
            }
            else
            {
                file >> Instemp;
                st.insert(Instemp);
            }
        }
        file.close();
        std::cout << "������ ������� �� ����� � ���������.\n";
        while (true)
        {
            std::cout << "�������� ���������� ��������: " << "\n";
            std::cout << "1 - ������� ������ �� �����.\n";
            std::cout << "2 - ������� ������ �� ����� � ������.\n";
            std::cout << "3 - �������� ������� � ������.\n";
            std::cout << "4 - ������� ������� �� ������� �� �������.\n";
            std::cout << "5 - ������� ���� ������� ������� �� �������.\n";
            std::cout << "6 - ��������� ���������� ��������� � �������� ����������.\n";
            std::cout << "7 - ������� ��� �������� � �������� ����������.\n";
            std::cout << "8 - ��������� ������ ���������.\n";
            std::cout << "������� �����, ��� ������������� ������������ ��������: ";
            std::cin >> n;
            if (n == 1)
            {
                std::cout << "��� ������ �� ������ ���������: \n";
                for (auto element : st)
                {
                    std::cout << element << "\n";
                }
            }
            else if (n == 2)
            {
                st.clear();
                file.open("text.txt");
                while (file >> n)
                {
                    if (n == 1)
                    {
                        file >> Intemp;
                        st.insert(Intemp);
                    }
                    else
                    {
                        file >> Instemp;
                        st.insert(Instemp);
                    }
                }
                file.close();
                std::cout << "������ ������� �� ����� � ���������.\n";
            }
            else if (n == 3)
            {
                Inheritor_��ountry_second non("������0", 123, 45645645, 45756757, 6, 1, 28122009, 1);
                st.insert(non);
                std::cout << "������� �������� � ���������.\n";
            }
            else if (n == 4)
            {
                std::cout << "������� �������� ���������� ��������: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                check = false;
                for (auto element : st)
                {
                    if (element.getTitle() == title)
                    {
                        st.erase(element);
                        check = true;;
                        break;
                    }
                }
                if (check)
                {
                    std::cout << "������� ��� ����� �� ���������.\n";
                }
                else
                {
                    std::cout << "�������� � ����� ��������� � ��������� ���.\n";
                }
            }
            else if (n == 5)
            {
                std::cout << "������� �������� ������� ��������: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                check = true;
                for (auto element : st)
                {
                    if (element.getTitle() == title)
                    {
                        std::cout << "��� ��� �������: ";
                        std::cout << element << "\n";
                        check = false;
                        break;
                    }
                }
                if (check)
                {
                    std::cout << "�������� � ����� ��������� � ��������� ���.\n";
                }
            }
            else if (n == 6)
            {
                std::cout << "�������� �������� �������� � ������� ����� ���������: \n";
                std::cout << "1 - ����� �������� ������ ������.\n";
                std::cout << "2 - ���� �������� ������ ������.\n";
                std::cout << "������� �������� ��������������� ������� ���������: ";
                std::cin >> n;
                if (n == 1)
                {
                    count_place_of_birth_citizen c = std::for_each(st.begin(), st.end(), count_place_of_birth_citizen());
                    std::cout << "������� " << c.count << " ��������� � �������� ����������.\n";
                }
                else if (n == 2)
                {
                    count_birthday_citizen c = std::for_each(st.begin(), st.end(), count_birthday_citizen());
                    std::cout << "������� " << c.count << " ��������� � �������� ����������.\n";
                }
                else
                {
                    std::cout << "������ ��������� ���.\n";
                }
            }
            else if (n == 7)
            {
                std::cout << "�������� �������� �������� � ������� ����� �������� �� �����: \n";
                std::cout << "1 - ����� �������� ������ ������.\n";
                std::cout << "2 - ���� �������� ������ ������.\n";
                std::cout << "������� �������� ��������������� ������� ���������: ";
                std::cin >> n;
                if (n == 1)
                {
                    std::cout << "��� ������ � ��������� � �������� ���������������:\n";
                    std::for_each(st.begin(), st.end(), print_place_of_birth_citizen);
                }
                else if (n == 2)
                {
                    std::cout << "��� ������ � ��������� � �������� ���������������:\n";
                    std::for_each(st.begin(), st.end(), print_birthday_citizen);
                }
                else
                {
                    std::cout << "������ ��������� ���.\n";
                }
            }
            else
            {
                break;
            }
        }
    }
}