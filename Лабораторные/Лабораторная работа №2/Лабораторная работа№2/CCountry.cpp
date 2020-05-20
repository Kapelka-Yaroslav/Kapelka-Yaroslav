#include "CCountry.h"	
const char* CCountry::getTitle() const { return title; }
int CCountry::getPopulation_density() const { return population_density; }
int CCountry::getNumber_of_cities() const { return number_of_cities; }
int CCountry::getPopulation() const { return  population; }
int CCountry::getArea() const { return area; }
int CCountry::getUnical_index() const { return unical_index; }
void CCountry::setTitle(const char* Title) { title = Title; }
void CCountry::setPopulation_density(const int& Population_density) { population_density = Population_density; }
void CCountry::setNumber_of_cities(const int& Number_of_cities) { number_of_cities = Number_of_cities; }
void CCountry::setPopulation(const int& Population) { population = Population; }
void CCountry::setArea(const int& Area) { area = Area; }
void CCountry::setUnical_index(const int& Unical_index) { unical_index = Unical_index; }
CCountry::CCountry()
{
	title = "CCountry";
	population_density = 1000;
	number_of_cities = 100;
	population = 1000000;
	area = 10000000;
	unical_index = 0;
	std::cout << "Файл создан при помощи конструктора по умолчанию." << "\n";
}
CCountry::CCountry(const CCountry& CCountry):title(CCountry.getTitle()), population_density(CCountry.getPopulation_density()), number_of_cities(CCountry.getNumber_of_cities()), population(CCountry.getPopulation()), area(CCountry.getArea()), unical_index(CCountry.getUnical_index()){}
CCountry::CCountry(const char* Title, const int& Number_of_cities, const int& Population, const int& Area):title(Title), number_of_cities(Number_of_cities), population(Population),area(Area), population_density(Area / Population)
{
	std::cout << "Файл создан при помощи конструктора с аргументами." << "\n";
}
CCountry::~CCountry()
{
	std::cout << "Файл уничтожен при помощи деструктора по умолчанию." << "\n";
}