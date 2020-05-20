#include "menu.h"
void menu()
{
    setlocale(LC_ALL, "Russian");
    int n = 0, temp_i;
    std::cout << "Введите номер, чтобы вызвать меню: 1 - меню родительского класса, 2 - меню класса-наследника." << "\n";
    std::cin >> n;
    if(n == 1){
        CMetod dir;
        CCountry firstcountry1("Страна1", 143, 45745656, 47342362, "Харьков", 22062012);
        dir.add_el(firstcountry1);
        CCountry firstcountry2("Страна2", 156, 38567454, 68457458, "Рим", 13012016);
        dir.add_el(firstcountry2);
        CCountry firstcountry3("Страна3", 167, 46357625, 98686453, "Ужгород", 31102007);
        dir.add_el(firstcountry3);
        CCountry firstcountry4("Страна4", 179, 78567583, 68457458, "Запорожье", 27072000);
        dir.add_el(firstcountry4);
        int c;
        while (n != 9)
        {
            std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_МЕНЮ_-_-_-_-_-_-_-_-_-_-_-_" << "\n";
            std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << "\n";
            std::cout << "_-_-_-_-_-_-_Выберите желаемую опцию:-_-_-_-_-_-_-_" << "\n";
            std::cout << "-_-_-_-1 - добавить элемент в список.-_-_-_-_-_-_-_" << "\n";
            std::cout << "-_-_-_-2 - удалить элемент из списка.-_-_-_-_-_-_-_" << "\n";
            std::cout << "-_-_-_-3 - показать все элементы списка.-_-_-_-_-_-" << "\n";
            std::cout << "-_-_-_-4 - найти наименьшую плотность населения страны." << "\n";
            std::cout << "-_-_-_-5 - записать данные а файл.-_-_-_-_-_-_-_-_-" << "\n";
            std::cout << "-_-_-_-6 - считать данные из файла.-_-_-_-_-_-_-_-_" << "\n";
            std::cout << "-_-_-_-7 - найти все элеметы в названии которых есть 2 или больше слова." << "\n";
            std::cout << "-_-_-_-8 - Отсортировать массив.-_-_-_-_-_-_-_-_-_-" << "\n";
            std::cout << "-_-_-_-9 - завершить работу программы.-_-_-_-_-_-_-" << "\n";
            std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << "\n";
            std::cin >> n;
            if (n == 1)
        
            {
                CCountry firstcountry5("Страна5", 323, 93645665, 78767464, "Сумы", 24112001);
                dir.add_el(firstcountry5);
                std::cout << "Страна добавлена." << "\n";
            }
            else if (n == 2)
            {
            std::cout << "Введите номер удаляемого элемента (нумерация начинаеться с 1): ";
            std::cin >> temp_i;
            dir.remove_el(temp_i - 1);
            std::cout << "Страна удалена." << "\n";
            }
            else if (n == 3)
            {
                dir.print_all();
            }
            else if (n == 4)
            {
                dir.find_to_population_density();
            }
            else if (n == 5)
            {
                dir.write_to_file("text.txt");
            }
            else if (n == 6)
            {
                dir.read_from_file("text.txt");
            }
            else if (n == 7)
            {
                dir.print_all_with_2_or_more_words();
            }
            else if (n == 8)
            {
                std::cout << "Введите номер признака, по которому хотите отсортировать массив: 1 – title, 2 – number_of_cities, 3 – population, 4 – area, 5 – citizen." << "\n";
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
                    std::cout << "Неправильный номер." << "\n";
                    n = 0;
                    break;
                }
            }
        }
        dir.del_all();
    }
    if (n == 2)
    {
        Inheritor_CMetod Inheritor_dir;
        Inheritor_ССountry firstcountry1("Страна1", 143, 45745656, 47342362, "Харьков", 22062012, 1);
        Inheritor_dir.add_el(firstcountry1);
        Inheritor_ССountry firstcountry2("Страна2", 156, 38567454, 68457458, "Рим", 13012016, 0);
        Inheritor_dir.add_el(firstcountry2);
        Inheritor_ССountry firstcountry3("Страна3", 167, 46357625, 98686453, "Ужгород", 31102007, 1);
        Inheritor_dir.add_el(firstcountry3);
        Inheritor_ССountry firstcountry4("Страна4", 179, 78567583, 68457458, "Запорожье", 27072000, 0);
        Inheritor_dir.add_el(firstcountry4);
        int c;
        while (n != 9)
        {
            std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_МЕНЮ_-_-_-_-_-_-_-_-_-_-_-_" << "\n";
            std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << "\n";
            std::cout << "_-_-_-_-_-_-_Выберите желаемую опцию:-_-_-_-_-_-_-_" << "\n";
            std::cout << "-_-_-_-1 - добавить элемент в список.-_-_-_-_-_-_-_" << "\n";
            std::cout << "-_-_-_-2 - удалить элемент из списка.-_-_-_-_-_-_-_" << "\n";
            std::cout << "-_-_-_-3 - показать все элементы списка.-_-_-_-_-_-" << "\n";
            std::cout << "-_-_-_-4 - найти наименьшую плотность населения страны." << "\n";
            std::cout << "-_-_-_-5 - записать данные а файл.-_-_-_-_-_-_-_-_-" << "\n";
            std::cout << "-_-_-_-6 - считать данные из файла.-_-_-_-_-_-_-_-_" << "\n";
            std::cout << "-_-_-_-7 - найти все элеметы в названии которых есть 2 или больше слова." << "\n";
            std::cout << "-_-_-_-8 - Отсортировать массив.-_-_-_-_-_-_-_-_-_-" << "\n";
            std::cout << "-_-_-_-9 - завершить работу программы.-_-_-_-_-_-_-" << "\n";
            std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << "\n";
            std::cin >> n;
            if (n == 1)

            {
                Inheritor_ССountry firstcountry5("Страна5", 323, 93645665, 78767464, "Сумы", 24112001, 0);
                Inheritor_dir.add_el(firstcountry5);
                std::cout << "Страна добавлена." << "\n";
            }
            else if (n == 2)
            {
                std::cout << "Введите номер удаляемого элемента (нумерация начинаеться с 1): ";
                std::cin >> temp_i;
                Inheritor_dir.remove_el(temp_i - 1);
                std::cout << "Страна удалена." << "\n";
            }
            else if (n == 3)
            {
                Inheritor_dir.print_all();
            }
            else if (n == 4)
            {
                Inheritor_dir.find_to_population_density();
            }
            else if (n == 5)
            {
                Inheritor_dir.write_to_file("text.txt1");
            }
            else if (n == 6)
            {
                Inheritor_dir.read_from_file("text.txt1");
            }
            else if (n == 7)
            {
                Inheritor_dir.print_all_with_2_or_more_words();
            }
            else if (n == 8)
            {
                std::cout << "Введите номер признака, по которому хотите отсортировать массив: 1 – title, 2 – number_of_cities, 3 – population, 4 – area, 5 – citizen, 6 – monarchy." << "\n";
                std::cin >> c;
                if (c == 1)
                {
                    Inheritor_dir.Inheritor_sort(sortTitle);
                }
                else if (c == 2)
                {
                    Inheritor_dir.Inheritor_sort(sortNumber_of_cities);
                }
                else if (c == 3)
                {
                    Inheritor_dir.Inheritor_sort(sortPopulation);
                }
                else if (c == 4)
                {
                    Inheritor_dir.Inheritor_sort(sortArea);
                }
                else if (c == 5)
                {
                    Inheritor_dir.Inheritor_sort(sortCitizen);
                }
                else if (c == 6)
                {
                    Inheritor_dir.Inheritor_sort(sortMonarchy);
                }
                else
                {
                    std::cout << "Неправильный номер." << "\n";
                    n = 0;
                    break;
                }
            }
        }
        Inheritor_dir.del_all();
    }
}
    