#pragma once
#include "CCountry.h"
class CMetod
{
private:
    CCountry* countries;
    CCountry* copy;
    Cint next_i = 0;
    Cint new_i = 1;
public:
    void add_el(const CCountry& Country);
    void remove_el(const int& index);
    void del_all();
    void get_to_Screen(const int& index) const;
    CCountry find_to_index(const int& index) const;
    void print_all() const;
    void find_to_population_density() const;
    void find_to_str_by_file(const std::string str);
    std::string get_str_by_file(const int& index) const;
    void write_to_file(const std::string name);
    void read_from_file(const std::string name);
    bool check_str(const std::string& str) const;
    void print_all_with_2_or_more_words() const;
    void sort(bool (*comp)(CCountry&, CCountry&));
};

bool sortTitle(CCountry&, CCountry&);
bool sortNumber_of_cities(CCountry&, CCountry&);
bool sortPopulation(CCountry&, CCountry&);
bool sortArea(CCountry&, CCountry&);
bool sortCitizen(CCountry&, CCountry&);

class Inheritor_CMetod
{
private:
    Inheritor_ÑÑountry* countries;
    Inheritor_ÑÑountry* copy;
    Cint next_i = 0;
    Cint new_i = 1;
public:
    void add_el(const Inheritor_ÑÑountry& Inheritor_Ñountry);
    void remove_el(const int& index);
    void del_all();
    void get_to_Screen(const int& index) const;
    Inheritor_ÑÑountry find_to_index(const int& index) const;
    void print_all() const;
    void find_to_population_density() const;
    void find_to_str_by_file(const std::string str);
    std::string get_str_by_file(const int& index) const;
    void write_to_file(const std::string name);
    void read_from_file(const std::string name);
    bool check_str(const std::string& str) const;
    void print_all_with_2_or_more_words() const;
    void Inheritor_sort(bool (*comp)(Inheritor_ÑÑountry&, Inheritor_ÑÑountry&));
};

bool sortTitle(Inheritor_ÑÑountry&, Inheritor_ÑÑountry&);
bool sortNumber_of_cities(Inheritor_ÑÑountry&, Inheritor_ÑÑountry&);
bool sortPopulation(Inheritor_ÑÑountry&, Inheritor_ÑÑountry&);
bool sortArea(Inheritor_ÑÑountry&, Inheritor_ÑÑountry&);
bool sortCitizen(Inheritor_ÑÑountry&, Inheritor_ÑÑountry&);
bool sortMonarchy(Inheritor_ÑÑountry&, Inheritor_ÑÑountry&);