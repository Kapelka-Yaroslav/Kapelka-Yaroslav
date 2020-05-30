#include "CMetod.h"


void CMetod::add_el(const Inheritor_ÑÑountry& Inheritor_Ñountry)
{
	if (next_i == 0)
	{
		countries = new CCountry * [next_i + 1];
		CCountry* point1 = new auto(Inheritor_Ñountry);
		countries[next_i] = point1;
		next_i++;
	}
	else
	{
		copy = new CCountry * [next_i + 1];
		for (int i = 0; i < next_i; i++)
		{
			copy[i] = countries[i];
		}
		delete[] countries;
		countries = new CCountry * [next_i + 1];
		for (int i = 0; i < next_i; i++)
		{
			countries[i] = copy[i];
		}
		CCountry* point1 = new auto(Inheritor_Ñountry);
		countries[next_i] = point1;
		delete[] copy;
		next_i++;
	}
}
void CMetod::add_el(const Inheritor_ÑÑountry_second& Inheritor_Ñountry_second)
{
	if (next_i == 0)
	{
		countries = new CCountry * [next_i + 1];
		CCountry* point2 = new auto(Inheritor_Ñountry_second);
		countries[next_i] = point2;
		next_i++;
	}
	else
	{
		copy = new CCountry * [next_i + 1];
		for (int i = 0; i < next_i; i++)
		{
			copy[i] = countries[i];
		}
		delete[] countries;
		countries = new CCountry * [next_i + 1];
		for (int i = 0; i < next_i; i++)
		{
			countries[i] = copy[i];
		}
		CCountry* point2 = new auto(Inheritor_Ñountry_second);
		countries[next_i] = point2;
		delete[] copy;
		next_i++;
	}
}
void CMetod::remove_el(const int& index)
{
	if (next_i == 1)
	{
		delete[] countries;
		next_i--;
	}
	else
	{
		copy = new CCountry * [next_i - 1];
		for (int i = 0; i < index; i++)
		{
			copy[i] = countries[i];
		}
		for (int i = index, j = index + 1; i < (next_i - 1), j < next_i; i++, j++)
		{
			copy[i] = countries[j];
		}
		delete[] countries;
		countries = new CCountry * [next_i - 1];
		for (int i = 0; i < next_i - 1; i++)
		{
			countries[i] = copy[i];
		}
		delete[] copy;
		next_i--;
	}
}
void CMetod::del_all()
{
	if (next_i != 0)
	{
		for (int i = 0; i < next_i; i++)
		{
			delete countries[i];
		}
		delete[] countries;
		next_i = 0;
	}

}
void CMetod::get_to_Screen(const int& index) const
{
	std::cout << "Title " << "Number_of_cities " << "Population " << "Area " << "Place_of_birth_citizen " << "Birthday_citizen " << "GetInfo" << "Kol_nationality" << "\n";
	std::cout << get_str_by_file(index) << "\n";
}
CCountry* CMetod::find_to_index(const int& index) const
{
	for (int i = 0; i < next_i; i++)
	{
		if (countries[i]->getUnical_index() == index)
		{
			return countries[i];
		}
	}
}
void CMetod::print_all() const
{
	for (int i = 0; i < next_i; i++) 
	{
		get_to_Screen(i);
	}
}
void CMetod::find_to_population_density() const
{
	float min = countries[0]->getPopulation_density();
	for (int i = 0; i < next_i; i++)
	{
		if (min > countries[i]->getPopulation_density())
		{
			min = countries[i]->getPopulation_density();
		}
	}
	for (int i = 0; i < next_i; i++)
	{
		if (countries[i]->getPopulation_density() == min)
			get_to_Screen(i);
	}
}
std::string CMetod::get_str_by_file(const int& index) const
{
	std::stringstream ss;
	ss << "_" << countries[index]->getTitle() << "_ " << countries[index]->getNumber_of_cities() << " " << countries[index]->getPopulation() << " " << countries[index]->getArea() << " " << countries[index]->getPlace_of_birth_citizen() << " " << countries[index]->getBirthday_citizen() << " " << countries[index]->getInfo();
	return ss.str();
}
void CMetod::find_to_str_by_file(const std::string str)
{
	if (check_str(str))
	{
		std::regex reg("_.+_");
		std::smatch smat;
		std::regex_search(str, smat, reg);
		int i = str.find("_");
		i = str.find("_", i + 1);
		std::regex reg_temp("_");
		std::string temp = smat[0];
		std::string Title = std::regex_replace(temp, reg_temp, "_");
		int i2 = str.find(" ", i + 2);
		temp = str.substr(i + 1, i2 - i);
		std::stringstream s;
		s << temp;
		int Number_of_cities;
		s >> Number_of_cities;
		int i3 = str.find(" ", i2 + 1);
		s.clear();
		temp = str.substr(i2 + 1, i3 - i2);
		s << temp;
		int Population;
		s >> Population;
		int i4 = str.find(" ", i3 + 1);
		s.clear();
		temp = str.substr(i3 + 1, i4 - i3);
		s << temp;
		int Area;
		s >> Area;
		int i5 = str.find(" ", i4 + 1);
		s.clear();
		temp = str.substr(i4 + 1, i5 - i4);
		s << temp;
		bool Place_of_birth_citizen;
		s >> Place_of_birth_citizen;
		int i6 = str.find(" ", i5 + 1);
		s.clear();
		temp = str.substr(i5 + 1, i6 - i5);
		s << temp;
		int Birthday_citizen;
		s >> Birthday_citizen;
		int i7 = str.find(" ", i6 + 1);
		s.clear();
		temp = str.substr(i6 + 1, i7 - i6);
		s << temp;
		s.clear();
		int check;
		s >> check;
		if (check == 1)
		{
			bool Monarchy;
			s >> Monarchy;
			Inheritor_ÑÑountry firstcountry(Title, Number_of_cities, Population, Area, Place_of_birth_citizen, Birthday_citizen, Monarchy);
			add_el(firstcountry);
		}
		else
		{
			bool Gross_domestic_product;
			s >> Gross_domestic_product;
			Inheritor_ÑÑountry_second secondcountry(Title, Number_of_cities, Population, Area, Place_of_birth_citizen, Birthday_citizen, Gross_domestic_product);
			add_el(secondcountry);
		}
	}
}
void CMetod::write_to_file(const std::string name)
{
	std::ofstream fout("text.txt");
	std::string s;
	for (int i = 0; i < next_i; i++)
	{
		s = get_str_by_file(i);
		fout << s;
		if (i != next_i - 1)
		{
			fout << "\n";
		}
	}
	fout.close();
}
void CMetod::read_from_file(const std::string name)
{
	del_all();
	std::ifstream fin("text.txt");
	char* check;
	while (!fin.eof())
	{
		check = new char[100];
		fin.getline(check, 100);
		find_to_str_by_file(check);
		delete[] check;
	}
	fin.close();
}
bool CMetod::check_str(const std::string& str) const
{
	std::regex reg("[A-Za-zA-ßà-ÿ0-9\!,\?\"\/:;\']*");
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
	std::regex reg_5("^\"[A-ZA-ß]");
	if (!std::regex_search(str, reg_5))
	{
		return false;
	}
	return true;
}
void CMetod::print_all_with_2_or_more_words() const
{
	for (int i = 0; i < next_i; i++)
	{
		std::string str;
		str = get_str_by_file(i);
		std::regex reg("_.+ .+_");
		if (std::regex_search(str, reg))
		{
			std::cout << i + 1 << " " << str << "\n";
		}
	}
}
void CMetod::sort(bool (*comp)(CCountry&, CCountry&))
{
	bool pr = false;
	CCountry* temp;
	do
	{
		pr = false;
		for (int i = 0; i < next_i - 1; i++)
		{
			if (comp(*(countries[i]), *(countries[i + 1])))
			{
				temp = countries[i];
				countries[i] = countries[i + 1];
				countries[i + 1] = temp;
				pr = true;
			}
		}
	} while (pr);
}
bool sortTitle(CCountry& a, CCountry& b)
{
	return (a.getTitle() > b.getTitle());
}
bool sortNumber_of_cities(CCountry& a, CCountry& b)
{
	return(a.getNumber_of_cities() < b.getNumber_of_cities());
}
bool sortPopulation(CCountry& a, CCountry& b)
{
	return(a.getPopulation() < b.getPopulation());
}
bool sortArea(CCountry& a, CCountry& b)
{
	return (a.getArea() < b.getArea());
}
bool sortCitizen(CCountry& a, CCountry& b)
{
	return((a.getPlace_of_birth_citizen() > b.getPlace_of_birth_citizen()) && (a.getBirthday_citizen() < b.getBirthday_citizen()));
}
std::istream& operator>> (std::istream& is, CMetod& Cmetod) {
	int temp;
	Inheritor_ÑÑountry In_CC;
	Inheritor_ÑÑountry_second In_CC_S;
	while (is >> temp) {
		if (temp == 1) {
			is >> In_CC;
			if (In_CC.type_of_Country != -1) {
				Cmetod.add_el(In_CC);
			}
		}
		else {
			is >> In_CC_S;
			if (In_CC_S.type_of_Country != -1) {
				Cmetod.add_el(In_CC_S);
			}
		}
	}
	return is;
}
std::ostream& operator<< (std::ostream& os, CMetod& Cmetod) {
	for (size_t i = 0; i < Cmetod.next_i; i++) {
		os << *(Cmetod[i]) << "\n";
	}
	return os;
}