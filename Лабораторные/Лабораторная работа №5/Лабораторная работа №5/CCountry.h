#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <regex>
#include <cstddef>
typedef int Cint; //Cint (Country)
class ÑNationality //Aggregation
{
private:
    Cint kol_nationality;
public:
    Cint getKol_Nationality() const;
    void setKol_Nationality(const int&);
};
class CÑitizen //Composition
{
private:
    std::string place_of_birth_citizen;
    Cint birthday_citizen;
public:
    const std::string getPlace_of_birth_citizen() const;
    Cint getBirthday_citizen() const;
    void setPlace_of_birth_citizen(const std::string&);
    void setBirthday_citizen(const int&);
};
class CCountry
{
private:
    std::string title;
    Cint population_density;
    Cint number_of_cities;
    Cint population;
    Cint area;
    Cint unical_index; 
    ÑNationality* kol_nationality;
    CÑitizen citizen;
public:
    CCountry(); 
    CCountry(const CCountry&);
    CCountry(const std::string&, const int&, const int&, const int&, const std::string&, const int&);
    ~CCountry();
    Cint getKol_Nationality() const;
    const std::string getPlace_of_birth_citizen() const;
    Cint getBirthday_citizen() const;
    const std::string getTitle() const;
    Cint getPopulation_density() const;
    Cint getNumber_of_cities() const;
    Cint getPopulation() const;
    Cint getArea() const;
    Cint getUnical_index() const;
    void setTitle(const std::string&);
    void setPopulation_density(const int&);
    void setNumber_of_cities(const int&);
    void setPopulation(const int&);
    void setArea(const int&);
    void setUnical_index(const int&);
    void setKol_Nationality(ÑNationality*);
    void setPlace_of_birth_citizen(const std::string&);
    void setBirthday_citizen(const int&);
};