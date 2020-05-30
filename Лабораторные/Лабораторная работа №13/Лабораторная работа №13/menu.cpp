#include "menu.h"
void old_menu()
{
    setlocale(LC_ALL, "Russian"); /// Локализация консоли. 
    int n = 0, temp_i;
    CMetod dir;
    std::ifstream f("text.txt");
    std::ofstream d;
    f >> dir;
    f.close();
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
            dir.find_to_str_by_file("_ Страна5_ 323 93645665 78767464 1 24112001 0 1");
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

void menu()
{
    setlocale(LC_ALL, "Russian");
    int n, w;
    std::cout << "Выберите с каким типом контейнера будет работать программа на этот раз: " << "\n";
    std::cout << "1 - vector" << "\n";
    std::cout << "2 - list" << "\n";
    std::cout << "3 - map" << "\n";
    std::cout << "4 - set" << "\n";
    std::cout << "Введите цифру соответствующею необходимому контейнеру: ";
    std::cin >> n;
    if (n == 1)
    {
        int q = 0;
        std::vector<CCountry> vector;
        Inheritor_ССountry Intemp;
        Inheritor_ССountry_second Instemp;
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
        std::cout << "Данные считаны из файла в вектор.\n";
        while (true)
        {
            std::cout << "Выберите дальнейшие действия: " << "\n";
            std::cout << "1 - вывести вектор на экран.\n";
            std::cout << "2 - считать данные из файла в вектор.\n";
            std::cout << "3 - добавить элемент в вектор.\n";
            std::cout << "4 - удалить элемент из вектора по индексу.\n";
            std::cout << "5 - вывести один элемент вектора по индексу.\n";
            std::cout << "6 - посчитать количество элементов с заданным параметром.\n";
            std::cout << "7 - вывести все элементы с заданным параметром.\n";
            std::cout << "8 - завершить работу программы.\n";
            std::cout << "Введите число, что соответствует необходимому действию: ";
            std::cin >> n;
            if (n == 1)
            {
                std::cout << "Вот данные вектора: \n";
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
                std::cout << "Данные считаны из файла в вектор.\n";
            }
            else if (n == 3)
            {
                Inheritor_ССountry_second Ins("Страна0", 123, 45645645, 45756757, 6, 1, 28122009, 1);
                vector.push_back(Ins);
                vector[q].setUnical_index(q);
                q++;
                std::cout << "Елемент добавлен в вектор.\n";
            }
            else if (n == 4)
            {
                std::cout << "Введите индекс удаляемого элемента: ";
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
                    std::cout << "Элемент с данным индексом удалён из вектора.\n";
                }
                else
                {
                    std::cout << "Введите правильный индекс.\n";
                }
            }
            else if (n == 5)
            {
                std::cout << "Введите индекс нужного элемента:";
                std::cin >> w;
                if (w < q)
                {
                    std::cout << "Вот данные о элементе с данным индексом:\n";
                    std::cout << vector[w] << "\n";
                }
                else
                {
                    std::cout << "Введите правильный индекс.\n";
                }
            }
            else if (n == 6)
            {
                std::cout << "Выберите параметр, элементы с которым будут посчитаны : \n";
                std::cout << "1 - место рождения жителя города.\n";
                std::cout << "2 - дата рождения жителя города.\n";
                std::cout << "Введите значение соответствующее нужному параметру: ";
                std::cin >> n;
                if (n == 1) {
                    count_place_of_birth_citizen c = std::for_each(vector.begin(), vector.end(), count_place_of_birth_citizen());
                    std::cout << "Найдено " << c.count << " элементов с заданным параметром.\n";
                }
                else if (n == 2) {
                    count_birthday_citizen c = std::for_each(vector.begin(), vector.end(), count_birthday_citizen());
                    std::cout << "Найдено " << c.count << " элементов с заданным параметром.\n";
                }
                else 
                {
                    std::cout << "Такого параметра нет.\n";
                }
            }
            else if (n == 7)
            {
                std::cout << "Выберите параметр, элементы с которым будут выведены на экран: \n";
                std::cout << "1 - место рождения жителя города.\n";
                std::cout << "2 - дата рождения жителя города.\n";
                std::cout << "Введите значение соответствующее нужному параметру: ";
                std::cin >> n;
                if (n == 1) 
                {
                    std::cout << "Вот данные о элементах с заданной характеристикой:\n";
                    std::for_each(vector.begin(), vector.end(), print_place_of_birth_citizen);
                }
                else if (n == 2) 
                {
                    std::cout << "Вот данные о элементах с заданной характеристикой:\n";
                    std::for_each(vector.begin(), vector.end(), print_birthday_citizen);
                }
                else 
                {
                    std::cout << "Такого параметра нет.\n";
                }
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
        Inheritor_ССountry Intemp;
        Inheritor_ССountry_second Instemp;
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
        std::cout << "Данные считаны из файла в список.\n";
        while (true)
        {
            std::cout << "Выберите дальнейшие действия: " << "\n";
            std::cout << "1 - вывести вектор на экран.\n";
            std::cout << "2 - считать данные из файла в вектор.\n";
            std::cout << "3 - добавить элемент в вектор.\n";
            std::cout << "4 - удалить элемент из вектора по индексу.\n";
            std::cout << "5 - вывести один элемент вектора по индексу.\n";
            std::cout << "6 - посчитать количество элементов с заданным параметром.\n";
            std::cout << "7 - вывести все элементы с заданным параметром.\n";
            std::cout << "8 - завершить работу программы.\n";
            std::cout << "Введите число, что соответствует необходимому действию: ";
            std::cin >> n;
            if (n == 1)
            {
                std::cout << "Вот данные списка: \n";
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
                std::cout << "Данные считаны из файла в список.\n";
            }
            else if (n == 3)
            {
                Inheritor_ССountry_second Ins("Страна0", 123, 45645645, 45756757, 6, 1, 28122009, 1);
                list.push_back(Ins);
                std::cout << "Элемент добавлен в список.\n";
            }
            else if (n == 4)
            {
                std::cout << "Введите название удаляемого элемента: ";
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
                    std::cout << "Элемент удалён.\n";
                }
                else
                {
                    std::cout << "Такого элемента нет.\n";
                }
            }
            else if (n == 5)
            {
                std::cout << "Введите название нужного элемента: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                check = true;
                for (auto element : list)
                {
                    if (element.getTitle() == title)
                    {
                        std::cout << "Вот нужный элемент: ";
                        std::cout << element << "\n";
                        check = false;
                        break;
                    }
                }
                if (check)
                {
                    std::cout << "Такого элемента нет.\n";
                }
            }
            else if (n == 6)
            {
                std::cout << "Выберите параметр, элементы с которым будут посчитаны : \n";
                std::cout << "1 - место рождения жителя города.\n";
                std::cout << "2 - дата рождения жителя города.\n";
                std::cout << "Введите значение соответствующее нужному параметру: ";
                std::cin >> n;
                if (n == 1) {
                    count_place_of_birth_citizen c = std::for_each(list.begin(), list.end(), count_place_of_birth_citizen());
                    std::cout << "Найдено " << c.count << " элементов с заданным параметром.\n";
                }
                else if (n == 2) {
                    count_birthday_citizen c = std::for_each(list.begin(), list.end(), count_birthday_citizen());
                    std::cout << "Найдено " << c.count << " элементов с заданным параметром.\n";
                }
                else
                {
                    std::cout << "Такого параметра нет.\n";
                }
            }
            else if (n == 7)
            {
                std::cout << "Выберите параметр, элементы с которым будут выведены на экран: \n";
                std::cout << "1 - место рождения жителя города.\n";
                std::cout << "2 - дата рождения жителя города.\n";
                std::cout << "Введите значение соответствующее нужному параметру: ";
                std::cin >> n;
                if (n == 1)
                {
                    std::cout << "Вот данные о элементах с заданной характеристикой:\n";
                    std::for_each(list.begin(), list.end(), print_place_of_birth_citizen);
                }
                else if (n == 2)
                {
                    std::cout << "Вот данные о элементах с заданной характеристикой:\n";
                    std::for_each(list.begin(), list.end(), print_birthday_citizen);
                }
                else
                {
                    std::cout << "Такого параметра нет.\n";
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
        Inheritor_ССountry Intemp;
        Inheritor_ССountry_second Instemp;
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
        std::cout << "Данные считаны из файла в контейнер.\n";
        while (true)
        {
            std::cout << "Выберите дальнейшие действия: " << "\n";
            std::cout << "1 - вывести вектор на экран.\n";
            std::cout << "2 - считать данные из файла в вектор.\n";
            std::cout << "3 - добавить элемент в вектор.\n";
            std::cout << "4 - удалить элемент из вектора по индексу.\n";
            std::cout << "5 - вывести один элемент вектора по индексу.\n";
            std::cout << "6 - посчитать количество элементов с заданным параметром.\n";
            std::cout << "7 - вывести все элементы с заданным параметром.\n";
            std::cout << "8 - завершить работу программы.\n";
            std::cout << "Введите число, что соответствует необходимому действию: ";
            std::cin >> n;
            if (n == 1)
            {
                std::cout << "Вот данные вашего контейнера: \n";
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
                std::cout << "Данные считаны из файла в контейнер.\n";
            }
            else if (n == 3)
            {
                Inheritor_ССountry_second non("Страна0", 123, 45645645, 45756757, 6, 1, 28122009, 1);
                mp.insert(std::pair<int, CCountry>(q++, non));
                std::cout << "Элемент добавлен в контейнер.\n";
            }
            else if (n == 4)
            {
                std::cout << "Введите числовой ключ удаляемого элемента: ";
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
                    std::cout << "Элемент удалён из контейнера.\n";
                }
                else
                {
                    std::cout << "Неверный ключ.\n";
                }
            }
            else if (n == 5)
            {
                std::cout << "Введите числовой ключ нужного элемента: ";
                std::cin >> w;
                check = true;;
                for (auto element : mp)
                {
                    if (element.first == w)
                    {
                        std::cout << "Вот данные нужного элемента: " << element.second << "\n";
                        check = false;
                        break;
                    }
                }
                if (check)
                {
                    std::cout << "Неверный ключ.\n";
                }
            }
            else if (n == 6) 
            {
                std::cout << "Выберите параметр элементы с которым будут посчитаны: \n";
                std::cout << "1 - место рождения жителя города.\n";
                std::cout << "2 - дата рождения жителя города.\n";
                std::cout << "Введите значение соответствующее нужному параметру: ";
                std::cin >> n;
                if (n == 1)
                {
                    ccount_place_of_birth_citizen c = std::for_each(mp.begin(), mp.end(), ccount_place_of_birth_citizen());
                    std::cout << "Найдено " << c.count << " элементов с заданным параметром.\n";
                }
                else if (n == 2) 
                {
                    ccount_birthday_citizen c = std::for_each(mp.begin(), mp.end(), ccount_birthday_citizen());
                    std::cout << "Найдено " << c.count << " элементов с заданным параметром.\n";
                }
                else
                {
                    std::cout << "Такого параметра нет.\n";
                }
            }
            else if (n == 7)
            {
                std::cout << "Выберите параметр элементы с которым будут выведены на экран: \n";
                std::cout << "1 - место рождения жителя города.\n";
                std::cout << "2 - дата рождения жителя города.\n";
                std::cout << "Введите значение соответствующее нужному параметру: ";
                std::cin >> n;
                if (n == 1) 
                {
                    std::cout << "Вот данные о элементах с заданной характеристикой:\n";
                    std::for_each(mp.begin(), mp.end(), pprint_place_of_birth_citizen);
                }
                else if (n == 2)
                {
                    std::cout << "Вот данные о элементах с заданной характеристикой:\n";
                    std::for_each(mp.begin(), mp.end(), pprint_birthday_citizen);
                }
                else 
                {
                    std::cout << "Такого параметра нет.\n";
                }
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
        Inheritor_ССountry Intemp;
        Inheritor_ССountry_second Instemp;
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
        std::cout << "Данные считаны из файла в множество.\n";
        while (true)
        {
            std::cout << "Выберите дальнейшие действия: " << "\n";
            std::cout << "1 - вывести вектор на экран.\n";
            std::cout << "2 - считать данные из файла в вектор.\n";
            std::cout << "3 - добавить элемент в вектор.\n";
            std::cout << "4 - удалить элемент из вектора по индексу.\n";
            std::cout << "5 - вывести один элемент вектора по индексу.\n";
            std::cout << "6 - посчитать количество элементов с заданным параметром.\n";
            std::cout << "7 - вывести все элементы с заданным параметром.\n";
            std::cout << "8 - завершить работу программы.\n";
            std::cout << "Введите число, что соответствует необходимому действию: ";
            std::cin >> n;
            if (n == 1)
            {
                std::cout << "Вот данные из вашего множества: \n";
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
                std::cout << "Данные считаны из файла в множество.\n";
            }
            else if (n == 3)
            {
                Inheritor_ССountry_second non("Страна0", 123, 45645645, 45756757, 6, 1, 28122009, 1);
                st.insert(non);
                std::cout << "Элемент добавлен в множество.\n";
            }
            else if (n == 4)
            {
                std::cout << "Введите название удаляемого элемента: ";
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
                    std::cout << "Элемент был удалён из множества.\n";
                }
                else
                {
                    std::cout << "Элемента с таким названием в множестве нет.\n";
                }
            }
            else if (n == 5)
            {
                std::cout << "Введите название нужного элемента: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                check = true;
                for (auto element : st)
                {
                    if (element.getTitle() == title)
                    {
                        std::cout << "Вот ваш элемент: ";
                        std::cout << element << "\n";
                        check = false;
                        break;
                    }
                }
                if (check)
                {
                    std::cout << "Элемента с таким названием в множестве нет.\n";
                }
            }
            else if (n == 6) 
            {
                std::cout << "Выберите параметр элементы с которым будут посчитаны: \n";
                std::cout << "1 - место рождения жителя города.\n";
                std::cout << "2 - дата рождения жителя города.\n";
                std::cout << "Введите значение соответствующее нужному параметру: ";
                std::cin >> n;
                if (n == 1) 
                {
                    count_place_of_birth_citizen c = std::for_each(st.begin(), st.end(), count_place_of_birth_citizen());
                    std::cout << "Найдено " << c.count << " элементов с заданным параметром.\n";
                }
                else if (n == 2)
                {
                    count_birthday_citizen c = std::for_each(st.begin(), st.end(), count_birthday_citizen());
                    std::cout << "Найдено " << c.count << " элементов с заданным параметром.\n";
                }
                else
                {
                    std::cout << "Такого параметра нет.\n";
                }
            }
            else if (n == 7) 
            {
                std::cout << "Выберите параметр элементы с которым будут выведены на экран: \n";
                std::cout << "1 - место рождения жителя города.\n";
                std::cout << "2 - дата рождения жителя города.\n";
                std::cout << "Введите значение соответствующее нужному параметру: ";
                std::cin >> n;
                if (n == 1) 
                {
                    std::cout << "Вот данные о элементах с заданной характеристикой:\n";
                    std::for_each(st.begin(), st.end(), print_place_of_birth_citizen);
                }
                else if (n == 2)
                {
                    std::cout << "Вот данные о элементах с заданной характеристикой:\n";
                    std::for_each(st.begin(), st.end(), print_birthday_citizen);
                }
                else 
                {
                    std::cout << "Такого параметра нет.\n";
                }
            }
            else
            {
                break;
            }
        }
    }
}