#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <regex>
#include <cstddef>
typedef int Cint; 
class ÑNationality 
{
    /// Àãğåãàöèÿ. 
private:
    Cint kol_nationality;
public:
    Cint getKol_Nationality() const;
    void setKol_Nationality(const int&);
};
class CÑitizen 
{
    /// Êîìïîçèöèÿ. 
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
    /// Àáñòğàêòíûé êëàññ. 
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
    virtual Cint getKol_Nationality() const;
    virtual std::string getPlace_of_birth_citizen() const;
    virtual Cint getBirthday_citizen() const;
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
    virtual void setKol_Nationality(ÑNationality*);
    virtual void setPlace_of_birth_citizen(const std::string&);
    virtual void setBirthday_citizen(const int&); 
    virtual bool getMonarchy() const;
    virtual std::string getInfo() const = 0;
};
class Inheritor_ÑÑountry final : public CCountry 
{
    /// Ïåğâûé êëàññ-íàñëåäíèê.
private:
    bool monarchy;
public:
    virtual bool getMonarchy() const override final;
    virtual void setMonarchy(const bool&) final;
    Inheritor_ÑÑountry();
    Inheritor_ÑÑountry(const Inheritor_ÑÑountry&);
    Inheritor_ÑÑountry(const std::string&, const int&, const int&, const int&, const std::string&, const int&, const bool&);
    ~Inheritor_ÑÑountry();
    virtual std::string getInfo() const final;
};
class Inheritor_ÑÑountry_second final : public CCountry 
{
    /// Âòîğîé êëàññ-íàñëåäíèê.
private:
    bool gross_domestic_product;
public:
    virtual bool getGross_domestic_product () const final;
    virtual void setGross_domestic_product (const bool&) final;
    Inheritor_ÑÑountry_second();
    Inheritor_ÑÑountry_second(const Inheritor_ÑÑountry_second&);
    Inheritor_ÑÑountry_second(const std::string&, const int&, const int&, const int&, const std::string&, const int&, const bool&);
    ~Inheritor_ÑÑountry_second();
    virtual std::string getInfo() const final;
};