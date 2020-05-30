#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream> 
#include <regex>

std::string Str_from_User();
int** read_data_from_file(std::string title);
void print_data_to_file(int** data, std::string title);
int* find_max_element(int** data);
int find_element_by_index(int** data, int index1, int index2);
void get_to_Screen_data(int** data);
void get_to_Screen_data(int* data);
void menu();
void clean_from_data(int** data);