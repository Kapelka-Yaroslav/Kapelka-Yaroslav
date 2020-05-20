#include "CCountry.h"		
int CCountry::getNumber_of_cities() const { return number_of_cities; }
int CCountry::getPopulation() const { return  population; }
int CCountry::getArea() const { return area; }
int CCountry::getUnical_index() const { return unical_index;}
void CCountry::setNumber_of_cities(const int& Number_of_cities) {number_of_cities = Number_of_cities; }
void CCountry::setPopulation(const int& Population) { population = Population; }
void CCountry::setArea(const int& Area) { area = Area; }
void CCountry::setUnical_index(const int& Unical_index) { unical_index = Unical_index; }