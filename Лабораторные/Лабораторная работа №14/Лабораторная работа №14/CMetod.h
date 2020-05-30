#pragma once
#include "CCountry.h"
class CMetod
{
private:
    CCountry** countries;
    CCountry** copy;
    Cint next_i = 0;
    Cint new_i = 1;
public:
    void add_el(const Inheritor_ÑÑountry& Inheritor_Ñountry);
    void add_el(const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second);
    void remove_el(const int& index);
    void del_all();
    CCountry* find_to_index(const int& index) const;
    void print_all() const;
    void find_to_population_density() const;
    void find_to_str_by_file(const std::string str);
    std::string get_str_by_file(const int& index) const;
    void write_to_file(const std::string name);
    void read_from_file(const std::string name);
    bool check_str(const std::string& str) const;
    void print_all_with_2_or_more_words() const;
    void sort(bool (*comp)(CCountry&, CCountry&));
    CCountry* operator[](const int& index)
    {
        return countries[index];
    }
    friend std::ostream& operator<< (std::ostream& os, CMetod& Cmetod);
};

struct count_place_of_birth_citizen
{
    count_place_of_birth_citizen() { count = 0; }
    void operator() (CCountry Country);
    int count;
};
struct count_birthday_citizen
{
    count_birthday_citizen() { count = 0; }
    void operator() (CCountry Country);
    int count;
};
struct ccount_place_of_birth_citizen
{
    ccount_place_of_birth_citizen() { count = 0; }
    void operator()(std::pair<int, CCountry> p);
    int count;
};
struct ccount_birthday_citizen
{
    ccount_birthday_citizen() { count = 0; }
    void operator()(std::pair<int, CCountry> p);
    int count;
};
struct sort_by {
    sort_by(int i) { type = i; }
    bool operator()(CCountry& Country1, CCountry& Country2);
    int type;
};

bool sortTitle(CCountry&, CCountry&);
bool sortNumber_of_cities(CCountry&, CCountry&);
bool sortPopulation(CCountry&, CCountry&);
bool sortArea(CCountry&, CCountry&);
bool sortCitizen(CCountry&, CCountry&);
std::istream& operator>> (std::istream& is, CMetod& Cmetod);
std::ostream& operator<< (std::ostream& os, CMetod& Cmetod);
void print(const CCountry& Country);
void pprint(const std::pair<int, CCountry>& p);
void print_place_of_birth_citizen(const CCountry& Country);
void print_birthday_citizen(const CCountry& Country);
void pprint_place_of_birth_citizen(const std::pair<int, CCountry>& p);
void pprint_birthday_citizen(const std::pair<int, CCountry>& p);
