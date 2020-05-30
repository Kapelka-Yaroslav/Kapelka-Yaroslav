#pragma once
#include <iostream>
class Function_class 
{
public:
	template <typename t> void print_to_Screen(t* data, int l);
	template <typename t> int find_index(t* data, int l, t el);
	template <typename t> void Sort(t* data, int l, int s);
	template <typename t> t find_min(t* data, int l);
	template <typename t> t find_max(t* data, int l);
};
class drob 
{
public:
	int chislitel;
	int znaminaytel;
	drob& operator= (const drob& d);
	drob(int f, int s);
	drob();
};
std::ostream& operator<< (std::ostream& os, const drob& d);
std::istream& operator>> (std::istream& is, drob& d);
bool operator== (const drob& d1, const drob& d2);
bool operator!= (const drob& d1, const drob& d2);
bool operator> (const drob& d1, const drob& d2);
bool operator< (const drob& d1, const drob& d2);
void menu();
