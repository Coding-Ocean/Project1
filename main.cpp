#include<iostream>
#include<fstream>
void loadData(const char* filename, int* num)
{
	std::ifstream fin(filename);
	fin >> *num;
}
int main()
{
	int num = 0;
	loadData("data.txt", &num);
	system("pause>0");
}