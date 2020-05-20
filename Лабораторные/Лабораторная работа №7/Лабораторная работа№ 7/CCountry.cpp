#include "CCountry.h"	
std::string CCountry::getTitle() const { return title; }
Cint CCountry::getPopulation_density() const { return population_density; }
Cint CCountry::getNumber_of_cities() const { return number_of_cities; }
Cint CCountry::getPopulation() const { return  population; }
Cint CCountry::getArea() const { return area; }
Cint CCountry::getUnical_index() const { return unical_index; }
Cint CCountry::getKol_Nationality() const { return kol_nationality->getKol_Nationality(); }
std::string CCountry::getPlace_of_birth_citizen() const { return citizen.getPlace_of_birth_citizen(); }
Cint CCountry::getBirthday_citizen() const { return citizen.getBirthday_citizen(); }
void CCountry::setTitle(const std::string& Title) { title = Title; }
void CCountry::setPopulation_density(const int& Population_density) { population_density = Population_density; }
void CCountry::setNumber_of_cities(const int& Number_of_cities) { number_of_cities = Number_of_cities; }
void CCountry::setPopulation(const int& Population) { population = Population; }
void CCountry::setArea(const int& Area) { area = Area; }
void CCountry::setUnical_index(const int& Unical_index) { unical_index = Unical_index; }
void CCountry::setKol_Nationality(�Nationality* New_Kol_Nationality) { kol_nationality = New_Kol_Nationality; }
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
	kol_nationality->setKol_Nationality(10);
	std::cout << "���� ������ ��� ������ ������������ �� ���������." << "\n";
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
	kol_nationality = CCountry.kol_nationality;
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
	std::cout << "���� ������ ��� ������ ������������ � �����������." << "\n";
}
CCountry::~CCountry()
{
	std::cout << "���� ��������� ��� ������ ����������� �� ���������." << "\n";
}
Cint �Nationality::getKol_Nationality() const { return kol_nationality; }
void �Nationality::setKol_Nationality(const int& Kol_Nationality) { kol_nationality = Kol_Nationality; }
const std::string C�itizen::getPlace_of_birth_citizen() const { return place_of_birth_citizen; }
Cint C�itizen::getBirthday_citizen() const { return birthday_citizen; }
void C�itizen::setPlace_of_birth_citizen(const std::string& Place_of_birth_citizen) { place_of_birth_citizen = Place_of_birth_citizen; }
void C�itizen::setBirthday_citizen(const int& Birthday_citizen) { birthday_citizen = Birthday_citizen; }
bool CCountry::getMonarchy() const { return false; }
bool Inheritor_��ountry::getMonarchy() const { return monarchy; }
void Inheritor_��ountry::setMonarchy(const bool& Monarchy) { monarchy = Monarchy; }
std::string Inheritor_��ountry::getInfo() const 
{
	std::stringstream s;
	s << monarchy;
	return s.str();
}
Inheritor_��ountry::Inheritor_��ountry() :CCountry(), monarchy(false) { }
Inheritor_��ountry::Inheritor_��ountry(const Inheritor_��ountry& in_CC) : CCountry(in_CC), monarchy(in_CC.monarchy) { }
Inheritor_��ountry::Inheritor_��ountry(const std::string& Title, const int& Number_of_cities, const int& Population, const int& Area, const std::string& Place_of_birth_citizen, const int& Birthday_citizen, const bool& Monarchy) : CCountry(Title, Number_of_cities, Population, Area, Place_of_birth_citizen, Birthday_citizen), monarchy(Monarchy) { }
Inheritor_��ountry::~Inheritor_��ountry() {}

bool Inheritor_��ountry_second::getGross_domestic_product() const { return gross_domestic_product; }
void Inheritor_��ountry_second::setGross_domestic_product(const bool& Gross_domestic_product) { gross_domestic_product = Gross_domestic_product;}
Inheritor_��ountry_second::Inheritor_��ountry_second() : CCountry(), gross_domestic_product(false) { }
Inheritor_��ountry_second::Inheritor_��ountry_second(const Inheritor_��ountry_second& in_CC_second): CCountry(in_CC_second), gross_domestic_product(in_CC_second.gross_domestic_product) { }
Inheritor_��ountry_second::Inheritor_��ountry_second(const std::string& Title, const int& Number_of_cities, const int& Population, const int& Area, const std::string& Place_of_birth_citizen, const int& Birthday_citizen, const bool& Gross_domestic_product) : CCountry(Title, Number_of_cities, Population, Area, Place_of_birth_citizen, Birthday_citizen), gross_domestic_product(Gross_domestic_product) { }
Inheritor_��ountry_second::~Inheritor_��ountry_second() { }
std::string Inheritor_��ountry_second::getInfo() const
{
	std::stringstream s;
	s << gross_domestic_product;
	return s.str();
}