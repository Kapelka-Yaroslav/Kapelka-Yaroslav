#pragma once
#include "CCountry.h"
class CMetod
{
    ///  Î‡ÒÒ - Ï‡ÒÒË‚. 
private:
    CCountry** countries;
    CCountry** copy;
    Cint next_i = 0;
    Cint new_i = 1;
public:
    void add_el(const Inheritor_——ountry& Inheritor_—ountry);
    void add_el(const Inheritor_——ountry_second& Inheritor_—ountry_second);
    void remove_el(const int& index);
    void del_all();
    void get_to_Screen(const int& index) const;
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

bool sortTitle(CCountry&, CCountry&);
bool sortNumber_of_cities(CCountry&, CCountry&);
bool sortPopulation(CCountry&, CCountry&);
bool sortArea(CCountry&, CCountry&);
bool sortCitizen(CCountry&, CCountry&);
std::istream& operator>> (std::istream& is, CMetod& Cmetod);
std::ostream& operator<< (std::ostream& os, CMetod& Cmetod);
