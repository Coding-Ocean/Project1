#include<fstream>

void loadData(const char* filename, int* num)
{
	std::ifstream fin(filename);
	fin >> *num;
}