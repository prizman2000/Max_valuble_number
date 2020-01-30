#include <iostream>
#include <fstream>

using namespace std;

#ifndef MOST_POPULAR_NUMBERS_LIB_H
#define MOST_POPULAR_NUMBERS_LIB_H

const int Numbers_count = 50;
const int Strings_count = 50;

int* Read_file(std::ifstream &f1);
void Fix_file(std::ifstream &f1);
void Displaying_results(int *mass);

#endif //MOST_POPULAR_NUMBERS_LIB_H
