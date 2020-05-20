#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
class CCountry
{
private:
    std::string title;
    int population_density;
    int number_of_cities;
    int population;
    int area;
    int unical_index;
public:
    CCountry();
    CCountry(const std::string, const int&, const int&, const int&, const int&);
    ~CCountry();
    CCountry(const CCountry&);
    const std::string getTitle() const;
    int getPopulation_density() const;
    int getNumber_of_cities() const;
    int getPopulation() const;
    int getArea() const;
    int getUnical_index() const;
    void setTitle(const std::string&);
    void setPopulation_density(const int&);
    void setNumber_of_cities(const int&);
    void setPopulation(const int&);
    void setArea(const int&);
    void setUnical_index(const int&);
};