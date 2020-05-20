#include "CMetod.h"
void CMetod::add_el(const CCountry& Country)
{
	if (next_i == 0)
	{
		countries = (CCountry*)malloc(sizeof(CCountry));
		countries[next_i] = Country;
		next_i++;
	}
	else
	{
		copy = (CCountry*)malloc(sizeof(CCountry) * (next_i + 1));
		for (int i = 0; i < next_i; i++)
		{
			copy[i] = countries[i];
		}
		free(countries);
		countries = (CCountry*)malloc(sizeof(CCountry) * (next_i + 1));
		for (int i = 0; i < next_i; i++)
		{
			countries[i] = copy[i];
		}
		free(copy);
		countries[next_i] = Country;
		next_i++;
	}
}
void CMetod::remove_el(const int& index)
{
	if (next_i == 1)
	{
		free(countries);
		next_i--;
	}
	else
	{
		copy = (CCountry*)malloc(sizeof(CCountry) * (next_i - 1));
		for (int i = 0; i < index; i++)
		{
			copy[i] = countries[i];
		}
		for (int i = index + 1; i < next_i; i++)
		{
			copy[i - 1] = countries[i];
		}
		free(countries);
		countries = (CCountry*)malloc(sizeof(CCountry) * (next_i - 1));
		for (int i = 0; i < next_i; i++)
		{
			countries[i] = copy[i];
		}
		free(copy);
		next_i--;
	}
}
void CMetod::del_all()
{
	free(countries);
	next_i = 0;
}
void CMetod::get_to_Screen(const int& index) const
{
	std::cout << "Number_of_cities " << "Population " << "Area      " << "Unical_index " << "\n";
	std::cout << countries[index].getNumber_of_cities() << "              " << countries[index].getPopulation() << "   " << countries[index].getArea() << "  " << countries[index].getUnical_index() <<"\n";
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