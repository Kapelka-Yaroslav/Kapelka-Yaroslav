#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <regex>
#include <iomanip>
#include <vector>
#include <set>
#include <list>
#include <map>
typedef int Cint;
class CÑitizen
{
private:
    bool place_of_birth_citizen;
    bool birthday_citizen;
public:
    const bool getPlace_of_birth_citizen() const;
    const bool getBirthday_citizen() const;
    void setPlace_of_birth_citizen(const bool&);
    void setBirthday_citizen(const bool&);
};
class CCountry
{
protected:
    std::string title;
    Cint population_density;
    Cint number_of_cities;
    Cint population;
    Cint area;
    Cint unical_index;
    CÑitizen citizen;
public:
    Cint type_of_Country = 0;
    CCountry();
    CCountry(const CCountry&);
    CCountry(const std::string&, const int&, const int&, const int&, const bool&, const bool&, const int&);
    ~CCountry();
    virtual bool getPlace_of_birth_citizen() const;
    virtual bool getBirthday_citizen() const;
    virtual std::string getTitle() const;
    virtual Cint getPopulation_density() const;
    virtual Cint getNumber_of_cities() const;
    virtual Cint getPopulation() const;
    virtual Cint getArea() const;
    virtual Cint getUnical_index() const;
    virtual void setTitle(const std::string&);
    virtual void setPopulation_density(const int&);
    virtual void setNumber_of_cities(const int&);
    virtual void setPopulation(const int&);
    virtual void setArea(const int&);
    virtual void setUnical_index(const int&);
    virtual void setPlace_of_birth_citizen(const bool&);
    virtual void setBirthday_citizen(const bool&);
    virtual std::string getInfo() const;
    CCountry& operator= (const CCountry& Country);
    friend bool operator== (const CCountry& Country1, const CCountry& Country2);
    friend bool operator!= (const CCountry& Country1, const CCountry& Country2);
};
class Inheritor_ÑÑountry final : public CCountry
{
private:
    bool monarchy;
public:
    virtual bool getMonarchy() const final;
    virtual void setMonarchy(const bool&) final;
    Inheritor_ÑÑountry();
    Inheritor_ÑÑountry(const Inheritor_ÑÑountry&);
    Inheritor_ÑÑountry(const std::string&, const int&, const int&, const int&, const bool&, const bool&, const int&, const bool&);
    ~Inheritor_ÑÑountry();
    virtual std::string getInfo() const final;
    Inheritor_ÑÑountry& operator= (const Inheritor_ÑÑountry& Inheritor_Ñountry);
    friend bool operator== (const Inheritor_ÑÑountry& Inheritor_Ñountry1, const Inheritor_ÑÑountry& Inheritor_Ñountry2);
    friend bool operator!= (const Inheritor_ÑÑountry& Inheritor_Ñountry1, const Inheritor_ÑÑountry& Inheritor_Ñountry2);

};
class Inheritor_ÑÑountry_second final : public CCountry
{
private:
    bool gross_domestic_product;
public:
    virtual bool getGross_domestic_product() const final;
    virtual void setGross_domestic_product(const bool&) final;
    Inheritor_ÑÑountry_second();
    Inheritor_ÑÑountry_second(const Inheritor_ÑÑountry_second&);
    Inheritor_ÑÑountry_second(const std::string&, const int&, const int&, const int&, const bool&, const bool&, const int&, const bool&);
    ~Inheritor_ÑÑountry_second();
    virtual std::string getInfo() const final;
    Inheritor_ÑÑountry_second& operator=(const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second);
    friend bool operator== (const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second1, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second2);
    friend bool operator!= (const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second1, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second2);
};
bool check_str(const std::string& str);
bool operator== (const CCountry& Country1, const CCountry& Country2);
bool operator!= (const CCountry& Country1, const CCountry& Country2);
bool operator== (const Inheritor_ÑÑountry& Inheritor_Ñountry1, const Inheritor_ÑÑountry& Inheritor_Ñountry2);
bool operator!= (const Inheritor_ÑÑountry& Inheritor_Ñountry1, const Inheritor_ÑÑountry& Inheritor_Ñountry2);
bool operator== (const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second1, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second2);
bool operator!= (const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second1, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second2);
bool operator> (const CCountry& Country1, const CCountry& Country2);
bool operator< (const CCountry& Country1, const CCountry& Country2);
bool operator> (const Inheritor_ÑÑountry& Inheritor_Ñountry1, const Inheritor_ÑÑountry& Inheritor_Ñountry2);
bool operator< (const Inheritor_ÑÑountry& Inheritor_Ñountry1, const Inheritor_ÑÑountry& Inheritor_Ñountry2);
bool operator> (const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second1, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second2);
bool operator< (const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second1, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second2);
std::ostream& operator<< (std::ostream& os, const Inheritor_ÑÑountry& Inheritor_Ñountry);
std::ostream& operator<< (std::ostream& os, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second);
std::istream& operator>> (std::istream& is, Inheritor_ÑÑountry& Inheritor_Ñountry);
std::istream& operator>> (std::istream& is, Inheritor_ÑÑountry_second& Inheritor_Ñountry_second);
std::ostream& operator<< (std::ostream& os, const CCountry& Country);
