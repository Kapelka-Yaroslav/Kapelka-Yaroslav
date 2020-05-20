#pragma once
#include <iostream>
class CCountry 
{
private:
    int number_of_cities; 
    int population;
    int area;
    int unical_index;
public:
    int getNumber_of_cities() const;
    int getPopulation() const;
    int getArea() const;
    int getUnical_index() const;
    void setNumber_of_cities(const int &Number_of_cities); 
    void setPopulation(const int &Population);
    void setArea(const int &Area);
    void setUnical_index(const int& Unical_index);
};