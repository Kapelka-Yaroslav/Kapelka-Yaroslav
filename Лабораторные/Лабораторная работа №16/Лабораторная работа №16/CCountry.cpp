#include "CCountry.h"	
std::string CCountry::getTitle() const { return title; }
Cint CCountry::getPopulation_density() const { return population_density; }
Cint CCountry::getNumber_of_cities() const { return number_of_cities; }
Cint CCountry::getPopulation() const { return  population; }
Cint CCountry::getArea() const { return area; }
Cint CCountry::getUnical_index() const { return unical_index; }
bool CCountry::getPlace_of_birth_citizen() const { return citizen.getPlace_of_birth_citizen(); }
bool CCountry::getBirthday_citizen() const { return citizen.getBirthday_citizen(); }
void CCountry::setTitle(const std::string& Title) { title = Title; }
void CCountry::setPopulation_density(const int& Population_density) { population_density = Population_density; }
void CCountry::setNumber_of_cities(const int& Number_of_cities) { number_of_cities = Number_of_cities; }
void CCountry::setPopulation(const int& Population) { population = Population; }
void CCountry::setArea(const int& Area) { area = Area; }
void CCountry::setUnical_index(const int& Unical_index) { unical_index = Unical_index; }
void CCountry::setPlace_of_birth_citizen(const bool& Place_of_birth_citizen) { citizen.setPlace_of_birth_citizen(Place_of_birth_citizen); }
void CCountry::setBirthday_citizen(const bool& Birthday_citizen) { citizen.setBirthday_citizen(Birthday_citizen); }
std::string CCountry::getInfo() const
{
	return "";
}
CCountry::CCountry()
{
	title = "CCountry";
	population_density = 1000;
	number_of_cities = 100;
	population = 1000000;
	area = 10000000;
	unical_index = 0;
	citizen.setPlace_of_birth_citizen(false);
	citizen.setBirthday_citizen(false);
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
CCountry::CCountry(const std::string& Title, const int& Number_of_cities, const int& Population, const int& Area, const bool& Place_of_birth_citizen, const bool& Birthday_citizen, const int& Unical_index)
{
	title = Title;
	number_of_cities = Number_of_cities;
	population = Population;
	area = Area;
	population_density = Area / Population;
	citizen.setPlace_of_birth_citizen(Place_of_birth_citizen);
	citizen.setBirthday_citizen(Birthday_citizen);
	unical_index = Unical_index;
	std::cout << "Ôàéë ñîçäàí ïðè ïîìîùè êîíñòðóêòîðà ñ àðãóìåíòàìè." << "\n";
}
CCountry::~CCountry()
{
	std::cout << "Ôàéë óíè÷òîæåí ïðè ïîìîùè äåñòðóêòîðà ïî óìîë÷àíèþ." << "\n";
}
const bool CÑitizen::getPlace_of_birth_citizen() const { return place_of_birth_citizen; }
const bool CÑitizen::getBirthday_citizen() const { return birthday_citizen; }
void CÑitizen::setPlace_of_birth_citizen(const bool& Place_of_birth_citizen) { place_of_birth_citizen = Place_of_birth_citizen; }
void CÑitizen::setBirthday_citizen(const bool& Birthday_citizen) { birthday_citizen = Birthday_citizen; }
bool Inheritor_ÑÑountry::getMonarchy() const { return monarchy; }
void Inheritor_ÑÑountry::setMonarchy(const bool& Monarchy) { monarchy = Monarchy; }
std::string Inheritor_ÑÑountry::getInfo() const
{
	std::stringstream s;
	s << monarchy;
	return s.str();
}
Inheritor_ÑÑountry::Inheritor_ÑÑountry() : CCountry(), monarchy(true)
{
	type_of_Country = 1;
}
Inheritor_ÑÑountry::Inheritor_ÑÑountry(const Inheritor_ÑÑountry& in_CC) : CCountry(in_CC), monarchy(in_CC.monarchy)
{
	type_of_Country = 1;
}
Inheritor_ÑÑountry::Inheritor_ÑÑountry(const std::string& Title, const int& Number_of_cities, const int& Population, const int& Area, const bool& Place_of_birth_citizen, const bool& Birthday_citizen, const int& Unical_index, const bool& Monarchy) : CCountry(Title, Number_of_cities, Population, Area, Place_of_birth_citizen, Birthday_citizen, Unical_index), monarchy(Monarchy)
{
	type_of_Country = 1;
}
Inheritor_ÑÑountry::~Inheritor_ÑÑountry() { }

bool Inheritor_ÑÑountry_second::getGross_domestic_product() const { return gross_domestic_product; }
void Inheritor_ÑÑountry_second::setGross_domestic_product(const bool& Gross_domestic_product) { gross_domestic_product = Gross_domestic_product; }
Inheritor_ÑÑountry_second::Inheritor_ÑÑountry_second() : CCountry(), gross_domestic_product(true)
{
	type_of_Country = 2;
}
Inheritor_ÑÑountry_second::Inheritor_ÑÑountry_second(const Inheritor_ÑÑountry_second& in_CC_second) : CCountry(in_CC_second), gross_domestic_product(in_CC_second.gross_domestic_product)
{
	type_of_Country = 2;
}
Inheritor_ÑÑountry_second::Inheritor_ÑÑountry_second(const std::string& Title, const int& Number_of_cities, const int& Population, const int& Area, const bool& Place_of_birth_citizen, const bool& Birthday_citizen, const int& Unical_index, const bool& Gross_domestic_product) : CCountry(Title, Number_of_cities, Population, Area, Place_of_birth_citizen, Birthday_citizen, Unical_index), gross_domestic_product(Gross_domestic_product)
{
	type_of_Country = 2;
}
Inheritor_ÑÑountry_second::~Inheritor_ÑÑountry_second() { }
std::string Inheritor_ÑÑountry_second::getInfo() const
{
	std::stringstream s;
	s << gross_domestic_product;
	return s.str();
}
bool operator== (const CCountry& Country1, const CCountry& Country2)
{
	if (Country1.getTitle() != Country2.getTitle())
	{
		return false;
	}
	else if (Country1.getPopulation_density() != Country2.getPopulation_density())
	{
		return false;
	}
	else if (Country1.getNumber_of_cities() != Country2.getNumber_of_cities())
	{
		return false;
	}
	else if (Country1.getPopulation() != Country2.getPopulation())
	{
		return false;
	}
	else if (Country1.getArea() != Country2.getArea())
	{
		return false;
	}
	else if (Country1.getUnical_index() != Country2.getUnical_index())
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool operator!= (const CCountry& Country1, const CCountry& Country2)
{
	return !(Country1 == Country2);
}
bool operator== (const Inheritor_ÑÑountry& Inheritor_Ñountry1, const Inheritor_ÑÑountry& Inheritor_Ñountry2)
{
	if (Inheritor_Ñountry1.getTitle() != Inheritor_Ñountry2.getTitle())
	{
		return false;
	}
	else if (Inheritor_Ñountry1.getPopulation_density() != Inheritor_Ñountry2.getPopulation_density())
	{
		return false;
	}
	else if (Inheritor_Ñountry1.getNumber_of_cities() != Inheritor_Ñountry2.getNumber_of_cities())
	{
		return false;
	}
	else if (Inheritor_Ñountry1.getPopulation() != Inheritor_Ñountry2.getPopulation())
	{
		return false;
	}
	else if (Inheritor_Ñountry1.getArea() != Inheritor_Ñountry2.getArea())
	{
		return false;
	}
	else if (Inheritor_Ñountry1.getUnical_index() != Inheritor_Ñountry2.getUnical_index())
	{
		return false;
	}
	else if (Inheritor_Ñountry1.getMonarchy() != Inheritor_Ñountry2.getMonarchy())
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool operator!= (const Inheritor_ÑÑountry& Inheritor_Ñountry1, const Inheritor_ÑÑountry& Inheritor_Ñountry2)
{
	return !(Inheritor_Ñountry1 == Inheritor_Ñountry2);
}
bool operator== (const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second1, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second2)
{
	if (Inheritor_Ñountry_second1.getTitle() != Inheritor_Ñountry_second2.getTitle())
	{
		return false;
	}
	else if (Inheritor_Ñountry_second1.getPopulation_density() != Inheritor_Ñountry_second2.getPopulation_density())
	{
		return false;
	}
	else if (Inheritor_Ñountry_second1.getNumber_of_cities() != Inheritor_Ñountry_second2.getNumber_of_cities())
	{
		return false;
	}
	else if (Inheritor_Ñountry_second1.getPopulation() != Inheritor_Ñountry_second2.getPopulation())
	{
		return false;
	}
	else if (Inheritor_Ñountry_second1.getArea() != Inheritor_Ñountry_second2.getArea())
	{
		return false;
	}
	else if (Inheritor_Ñountry_second1.getUnical_index() != Inheritor_Ñountry_second2.getUnical_index())
	{
		return false;
	}
	else if (Inheritor_Ñountry_second1.getGross_domestic_product() != Inheritor_Ñountry_second2.getGross_domestic_product())
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool operator!=(const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second1, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second2)
{
	return !(Inheritor_Ñountry_second1 == Inheritor_Ñountry_second2);
}
bool check_str(const std::string& str)
{
	std::regex reg("[A-Za-zÀ-ßà-ÿ0-9\s\!,\?\"\.:;\']*");
	if (!(std::regex_search(str, reg)))
	{
		return false;
	}
	std::regex reg_2("\\s{2,}");
	if (std::regex_search(str, reg_2))
	{
		return false;
	}
	std::regex reg_3("[\!\?:\.,\;]{2,}");
	if (std::regex_search(str, reg_3))
	{
		return false;
	}
	std::regex reg_4("[\'\"]{2,}");
	if (std::regex_search(str, reg_4))
	{
		return false;
	}
	return true;
}
std::ostream& operator<< (std::ostream& os, const CCountry& Country)
{
	return os << Country.type_of_Country << "  " << "_ " << Country.getTitle() << "_ " << Country.getNumber_of_cities() << " " << Country.getPopulation() << " " << Country.getArea() << " " << Country.getPlace_of_birth_citizen() << " " << Country.getBirthday_citizen() << " " << Country.getUnical_index() << " " << Country.getInfo();
}
std::ostream& operator<< (std::ostream& os, const Inheritor_ÑÑountry& Inheritor_Ñountry)
{
	return os << Inheritor_Ñountry.type_of_Country << "  " << "_ " << Inheritor_Ñountry.getTitle() << "_ " << Inheritor_Ñountry.getNumber_of_cities() << " " << Inheritor_Ñountry.getPopulation() << " " << Inheritor_Ñountry.getArea() << " " << Inheritor_Ñountry.getPlace_of_birth_citizen() << " " << Inheritor_Ñountry.getBirthday_citizen() << " " << Inheritor_Ñountry.getUnical_index() << " " << Inheritor_Ñountry.getMonarchy();
}
std::ostream& operator<< (std::ostream& os, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second)
{
	return os << Inheritor_Ñountry_second.type_of_Country << "  " << "_ " << Inheritor_Ñountry_second.getTitle() << "_ " << Inheritor_Ñountry_second.getNumber_of_cities() << " " << Inheritor_Ñountry_second.getPopulation() << " " << Inheritor_Ñountry_second.getArea() << " " << Inheritor_Ñountry_second.getPlace_of_birth_citizen() << " " << Inheritor_Ñountry_second.getBirthday_citizen() << " " << Inheritor_Ñountry_second.getUnical_index() << " " << Inheritor_Ñountry_second.getGross_domestic_product();
}
std::istream& operator>>(std::istream& is, Inheritor_ÑÑountry& Inheritor_Ñountry)
{
	std::string title;
	std::string temp;
	std::regex reg("_$");
	std::stringstream temps;
	Inheritor_ÑÑountry temp_In_CC;
	bool check = true;
	bool global_check = true;
	do
	{
		is >> temp;
		if (check_str(temp))
		{
			title += temp;
		}
		else
		{
			global_check = false;
		}
		if (std::regex_search(title, reg))
		{
			check = false;
		}
		else
		{
			title += " ";
		}
	} while (check);
	std::regex reg_1("_");
	title = std::regex_replace(title, reg_1, "");
	temp_In_CC.setTitle(title);
	int temp_i = 0;
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC.setNumber_of_cities(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC.setPopulation(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC.setArea(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC.setPlace_of_birth_citizen(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC.setBirthday_citizen(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC.setUnical_index(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC.setMonarchy(temp_i);
	if (global_check == true)
	{
		Inheritor_Ñountry = temp_In_CC;
	}
	else
	{
		temp_In_CC.type_of_Country = -1;
	}
	return is;
}
std::istream& operator>>(std::istream& is, Inheritor_ÑÑountry_second& Inheritor_Ñountry_second) {
	std::string title;
	std::string temp;
	std::regex reg("_$");
	std::stringstream temps;
	Inheritor_ÑÑountry_second temp_In_CC_S;
	bool check = true;
	bool global_check = true;
	do {
		is >> temp;
		if (check_str(temp))
		{
			title += temp;
		}
		else {
			global_check = false;
		}
		if (std::regex_search(title, reg))
		{
			check = false;
		}
		else
		{
			title += " ";
		}
	} while (check);
	std::regex reg_1("_");
	title = std::regex_replace(title, reg_1, "");
	temp_In_CC_S.setTitle(title);
	int temp_i = 0;
	std::string temp_i_1;
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC_S.setNumber_of_cities(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC_S.setPopulation(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC_S.setArea(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC_S.setPlace_of_birth_citizen(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC_S.setBirthday_citizen(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC_S.setUnical_index(temp_i);
	is >> temp;
	if (!check_str(temp))
	{
		global_check = false;
	}
	temps << temp;
	temps >> temp_i;
	temps.clear();
	temp_In_CC_S.setGross_domestic_product(temp_i);
	if (global_check == true)
	{
		Inheritor_Ñountry_second = temp_In_CC_S;
	}
	else
	{
		Inheritor_Ñountry_second.type_of_Country = -1;
	}
	return is;
}
CCountry& CCountry::operator= (const CCountry& Country)
{
	title = Country.title;
	population_density = Country.population_density;
	number_of_cities = Country.number_of_cities;
	population = Country.population;
	area = Country.area;
	unical_index = Country.unical_index;
	citizen.setPlace_of_birth_citizen(Country.getPlace_of_birth_citizen());
	citizen.setBirthday_citizen(Country.getBirthday_citizen());
	return *this;
}
Inheritor_ÑÑountry& Inheritor_ÑÑountry::operator= (const Inheritor_ÑÑountry& Inheritor_Ñountry)
{
	title = Inheritor_Ñountry.title;
	population_density = Inheritor_Ñountry.population_density;
	number_of_cities = Inheritor_Ñountry.number_of_cities;
	population = Inheritor_Ñountry.population;
	area = Inheritor_Ñountry.area;
	unical_index = Inheritor_Ñountry.unical_index;
	citizen.setPlace_of_birth_citizen(Inheritor_Ñountry.getPlace_of_birth_citizen());
	citizen.setBirthday_citizen(Inheritor_Ñountry.getBirthday_citizen());
	monarchy = Inheritor_Ñountry.monarchy;
	return *this;
}
Inheritor_ÑÑountry_second& Inheritor_ÑÑountry_second::operator=(const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second)
{

	title = Inheritor_Ñountry_second.title;
	population_density = Inheritor_Ñountry_second.population_density;
	number_of_cities = Inheritor_Ñountry_second.number_of_cities;
	population = Inheritor_Ñountry_second.population;
	area = Inheritor_Ñountry_second.area;
	unical_index = Inheritor_Ñountry_second.unical_index;
	citizen.setPlace_of_birth_citizen(Inheritor_Ñountry_second.getPlace_of_birth_citizen());
	citizen.setBirthday_citizen(Inheritor_Ñountry_second.getBirthday_citizen());
	gross_domestic_product = Inheritor_Ñountry_second.gross_domestic_product;
	return *this;
}
bool operator> (const CCountry& Country1, const CCountry& Country2) {
	return Country1.getTitle() < Country2.getTitle();
}
bool operator< (const CCountry& Country1, const CCountry& Country2) {
	return Country1.getTitle() > Country2.getTitle();
}
bool operator> (const Inheritor_ÑÑountry& Inheritor_Ñountry1, const Inheritor_ÑÑountry& Inheritor_Ñountry2) {
	return Inheritor_Ñountry1.getTitle() < Inheritor_Ñountry2.getTitle();
}
bool operator< (const Inheritor_ÑÑountry& Inheritor_Ñountry1, const Inheritor_ÑÑountry& Inheritor_Ñountry2) {
	return Inheritor_Ñountry1.getTitle() > Inheritor_Ñountry2.getTitle();
}
bool operator> (const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second1, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second2) {
	return Inheritor_Ñountry_second1.getTitle() < Inheritor_Ñountry_second2.getTitle();
}
bool operator< (const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second1, const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second2) {
	return Inheritor_Ñountry_second1.getTitle() > Inheritor_Ñountry_second2.getTitle();
}
void* CCountry::operator new(size_t data) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð new êëàññà CCountry.\n";
	return ::operator new(data);
}
void* CCountry::operator new[](size_t data) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð new[] êëàññà CCountry.\n";
	return ::operator new[](data);
}
void CCountry::operator delete(void* ptr) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð delete êëàññà CCountry.\n";
	return ::operator delete(ptr);
}
void CCountry::operator delete[](void* ptr) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð delete[] êëàññà CCountry.\n";
	return ::operator delete[](ptr);
}
void* Inheritor_ÑÑountry::operator new(size_t data) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð new êëàññà Inheritor_ÑÑountry.\n";
	return ::operator new(data);
}
void* Inheritor_ÑÑountry::operator new[](size_t data) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð new[] êëàññà Inheritor_ÑÑountry.\n";
	return ::operator new[](data);
}
void Inheritor_ÑÑountry::operator delete(void* ptr) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð delete êëàññà Inheritor_ÑÑountry.\n";
	return ::operator delete(ptr);
}
void Inheritor_ÑÑountry::operator delete[](void* ptr) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð delete[] êëàññà Inheritor_ÑÑountry.\n";
	return ::operator delete[](ptr);
}
void* Inheritor_ÑÑountry_second::operator new(size_t data) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð new êëàññà Inheritor_ÑÑountry_second.\n";
	return ::operator new(data);
}
void* Inheritor_ÑÑountry_second::operator new[](size_t data) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð new[] êëàññà Inheritor_ÑÑountry_second.\n";
	return ::operator new[](data);
}
void Inheritor_ÑÑountry_second::operator delete(void* ptr) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð delete êëàññà Inheritor_ÑÑountry_second.\n";
	return ::operator delete(ptr);
}
void Inheritor_ÑÑountry_second::operator delete[](void* ptr) {
	std::cout << "Òóò ñðàáîòàë îïåðàòîð delete[] êëàññà Inheritor_ÑÑountry_second.\n";
	return ::operator delete[](ptr);
}