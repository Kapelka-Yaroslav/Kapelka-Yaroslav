#include "CCountry.h"
class CMetod
{
private:
    CCountry* countries;
    CCountry* copy;
    int next_i = 0;
    int new_i = 1;
public:
    void add_el(const CCountry& CCountry);
    void remove_el(const int& index);
    void del_all();
    void get_to_Screen(const int& index) const;
    CCountry find_to_index(const int& index) const;
    void print_all() const;
    void find_to_population_density() const;
};