#include "CMetod.h"
void CMetod::add_el(const CCountry& Country)
{
	if (next_i == 0)
	{
		countries = new CCountry[1];
		countries[next_i] = Country;
		next_i++;
	}
	else
	{
		copy = new CCountry[next_i + 1];
		for (int i = 0; i < next_i; i++)
		{
			copy[i] = countries[i];
		}
		delete[] countries;
		countries = new CCountry[next_i + 1];
		for (int i = 0; i < next_i; i++)
		{
			countries[i] = copy[i];
		}
		delete[] copy;
		countries[next_i] = Country;
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
		copy = new CCountry[next_i - 1];
		for (int i = 0; i < index; i++)
		{
			copy[i] = countries[i];
		}
		for (int i = index, j = index + 1; i < (next_i - 1), j < next_i; i++, j++)
		{
			copy[i] = countries[j];
		}
		delete[] countries;
		countries = new CCountry[next_i - 1];
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
		delete[] countries;
		next_i = 0;
	}
	
}
void CMetod::get_to_Screen(const int& index) const
{
	std::cout << "Title " << "Number_of_cities " << "Population " << "Area " << "Unical_index " << "\n";
	std::cout << get_str_by_file(index) << "\n";
}
CCountry CMetod::find_to_index(const int& index) const
{
	for (int i = 0; i < next_i; i++)
	{
		if (countries[i].getUnical_index() == index)
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
	float min = countries[0].getPopulation_density();
	for (int i = 0; i < next_i; i++)
	{
		if (min > countries[i].getPopulation_density())
		{
			min = countries[i].getPopulation_density();
		}
	}
	for (int i = 0; i < next_i; i++)
	{
		if (countries[i].getPopulation_density() == min)
			get_to_Screen(i);
	}
}
std::string CMetod::get_str_by_file(const int& index) const
{
	std::stringstream ss;
    ss << countries[index].getTitle() << " " << countries[index].getNumber_of_cities() << " " << countries[index].getPopulation() << " " << countries[index].getArea() << " " << countries[index].getUnical_index();
	return ss.str();
}
void CMetod::find_to_str_by_file(const std::string str)
{
	int i = str.find(" ");
	std::string Title = str.substr(0, i);
	int i2 = str.find(" ", i + 1);
	std::string temp = str.substr(i + 1, i2 - i);
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
	int Unical_index;
	s >> Unical_index;
	int i6 = str.find(" ", i5 + 1);
	s.clear();
	temp = str.substr(i5 + 1, i6 - i5);
	s << temp;
	CCountry secondcountry(Title, Number_of_cities, Population, Area, Unical_index);
	add_el(secondcountry);
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