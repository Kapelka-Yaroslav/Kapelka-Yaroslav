#include "menu.h"
void menu()
{
    setlocale(LC_ALL, "Russian");
    int n = 0, temp_i;
    CMetod dir;
    CCountry firstcountry1("Страна1", 143, 45745656, 47342362);
    dir.add_el(firstcountry1);
    CCountry firstcountry2("Страна2", 156, 38567454, 68457458);
    dir.add_el(firstcountry2);
    CCountry firstcountry3("Страна3", 167, 46357625, 98686453);
    dir.add_el(firstcountry3);
    CCountry firstcountry4("Страна4", 179, 78567583, 68457458);
    dir.add_el(firstcountry4);
    while (n != 9)
    {
        std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_МЕНЮ_-_-_-_-_-_-_-_-_-_-_-_" << "\n";
        std::cout << "_-_-_-_-_-_-_Выберите желаемую опцию:-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-1 - добавить элемент в список.-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-2 - получить элемент в списке по индексу._-_" << "\n";
        std::cout << "-_-_-_-3 - удалить элемент из списка.-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-4 - показать все элементы списка.-_-_-_-_-_-" << "\n";
        std::cout << "-_-_-_-5 - найти наименьшую плотность населения страны." << "\n";
        std::cout << "-_-_-_-6 - записать данные а файл.-_-_-_-_-_-_-_-_-" << "\n";
        std::cout << "-_-_-_-7 - считать данные из файла.-_-_-_-_-_-_-_-_" << "\n";
        std::cout << "-_-_-_-8 - найти все элеметы в названии которых есть 2 или больше слова." << "\n";
        std::cout << "-_-_-_-9 - завершить работу программы.-_-_-_-_-_-_-" << "\n";
        std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << "\n";
        std::cin >> n;
        if (n == 1)
        {
            CCountry firstcountry5("Страна6", 323, 93645665, 78767464);
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
        else if (n == 8)
        {
            dir.print_all_with_2_or_more_words();
        }
    }
    dir.del_all();
}