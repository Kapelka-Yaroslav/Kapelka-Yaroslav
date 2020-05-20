#include "menu.h"
void menu()
{
    setlocale(LC_ALL, "Russian");
    int n = 0, temp_i;
    CMetod dir;
    CCountry firstcountry1("страна1", 143, 45745656, 47342362, 1);
    dir.add_el(firstcountry1);
    CCountry firstcountry2("страна2", 156, 38567454, 68457458, 0);
    dir.add_el(firstcountry2);
    CCountry firstcountry3("страна3", 167, 46357625, 98686453, 1);
    dir.add_el(firstcountry3);
    CCountry firstcountry4("страна4", 179, 78567583, 68457458, 0);
    dir.add_el(firstcountry4);
    while (n != 8)
    {
        std::cout << "_-_-_-Выберите желаемую опцию:_-_-_-_-_-_-_-_-_-_-_-" << "\n";
        std::cout << "_-1 - добавить элемент в список.-_-_-_-_-_-_-_-_-_-_" << "\n";
        std::cout << "_-2 - получить элемент в списке по индексу.-_-_-_-_-" << "\n";
        std::cout << "_-3 - удалить элемент из списка.-_-_-_-_-_-_-_-_-_-_" << "\n";
        std::cout << "_-4 - показать все элементы списка.-_-_-_-_-_-_-_-_-" << "\n";
        std::cout << "_-5 - найти наименьшую плотность населения страны.-_" << "\n";
        std::cout << "_-6 - записать данные а файл.-_-_-_-_-_-_-_-_-_-_-_-" << "\n";
        std::cout << "_-7 - считать данные из файла.-_-_-_-_-_-_-_-_-_-_-_" << "\n";
        std::cout << "_-8 - завершить работу программы.-_-_-_-_-_-_-_-_-_-" << "\n";
        std::cin >> n;
        if (n == 1)
        {
            CCountry firstcountry5("страна6", 323, 93645665, 78767464, 1);
            dir.add_el(firstcountry5);
            std::cout << "Страна добавлена." << "\n";
        }
        else if (n == 2)
        {
            std::cout << "Введите индекс нового элемента: ";
            std::cin >> temp_i;
            dir.find_to_index(temp_i);
        }
        else if (n == 3)
        {
            std::cout << "Введите номер удаляемого элемента (нумерация начинаеться с 1): ";
            std::cin >> temp_i;
            dir.remove_el(temp_i - 1);
            std::cout << "Страна удалена" << "\n";
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
    }
    dir.del_all();
}