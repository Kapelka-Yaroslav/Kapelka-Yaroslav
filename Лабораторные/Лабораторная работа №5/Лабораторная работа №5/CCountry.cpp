#include "CCountry.h"	
const std::string CCountry::getTitle() const { return title; }
Cint CCountry::getPopulation_density() const { return population_density; }
Cint CCountry::getNumber_of_cities() const { return number_of_cities; }
Cint CCountry::getPopulation() const { return  population; }
Cint CCountry::getArea() const { return area; }
Cint CCountry::getUnical_index() const { return unical_index; }
Cint CCountry::getKol_Nationality() const { return kol_nationality->getKol_Nationality(); }
const std::string CCountry::getPlace_of_birth_citizen() const { return citizen.getPlace_of_birth_citizen(); }
Cint CCountry::getBirthday_citizen() const { return citizen.getBirthday_citizen(); }
void CCountry::setTitle(const std::string& Title) { title = Title; }
void CCountry::setPopulation_density(const int& Population_density) { population_density = Population_density; }
void CCountry::setNumber_of_cities(const int& Number_of_cities) { number_of_cities = Number_of_cities; }
void CCountry::setPopulation(const int& Population) { population = Population; }
void CCountry::setArea(const int& Area) { area = Area; }
void CCountry::setUnical_index(const int& Unical_index) { unical_index = Unical_index; }
void CCountry::setKol_Nationality(ÑNationality* New_Kol_Nationality) { kol_nationality = New_Kol_Nationality; }
void CCountry::setPlace_of_birth_citizen(const std::string& Place_of_birth_citizen) { citizen.setPlace_of_birth_citizen(Place_of_birth_citizen); }
void CCountry::setBirthday_citizen(const int& Birthday_citizen) { citizen.setBirthday_citizen(Birthday_citizen); }
CCountry::CCountry()
{
	title = "CCountry";
	population_density = 1000;
	number_of_cities = 100;
	population = 1000000;
	area = 10000000;
	unical_index = 0;
	citizen.setPlace_of_birth_citizen("New_York");
	citizen.setBirthday_citizen(11111111);
	std::cout << "Ôàéë ñîçäàí ïðè ïîìîùè êîíñòðóêòîðà ïî óìîë÷àíèþ." << "\n";
}
CCountry::CCountry(const CCountry& CCountry) 
{
	title = CCountry.title;
	population_density = CCountry.population_density;
	number_of_cities = CCountry.number_of_cities;
	population = CCountry.population;
	area = CCountry.area;
	unical_index = CCountry.unical_index;
	citizen = CCountry.citizen;
}
CCountry::CCountry(const std::string& Title, const int& Number_of_cities, const int& Population, const int& Area, const std::string& Place_of_birth_citizen, const int& Birthday_citizen)
{
	title = Title;
	number_of_cities = Number_of_cities;
	population = Population;
	area = Area;
	population_density = Area / Population;
	citizen.setPlace_of_birth_citizen(Place_of_birth_citizen);
	citizen.setBirthday_citizen(Birthday_citizen);
	std::cout << "Ôàéë ñîçäàí ïðè ïîìîùè êîíñòðóêòîðà ñ àðãóìåíòàìè." << "\n";
}
CCountry::~CCountry()
{
	std::cout << "Ôàéë óíè÷òîæåí ïðè ïîìîùè äåñòðóêòîðà ïî óìîë÷àíèþ." << "\n";
}
Cint ÑNationality::getKol_Nationality() const { return kol_nationality; }
void ÑNationality::setKol_Nationality(const int& Kol_Nationality) { kol_nationality = Kol_Nationality; }
const std::string CÑitizen::getPlace_of_birth_citizen() const { return place_of_birth_citizen; }
Cint CÑitizen::getBirthday_citizen() const { return birthday_citizen; }
void CÑitizen::setPlace_of_birth_citizen(const std::string& Place_of_birth_citizen) { place_of_birth_citizen = Place_of_birth_citizen; }
void CÑitizen::setBirthday_citizen(const int& Birthday_citizen) { birthday_citizen = Birthday_citizen; }