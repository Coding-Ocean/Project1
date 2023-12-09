#include<iostream>
#include<fstream>
void loadData(const char* filename, int* num)
{
	std::ifstream fin(filename);
	fin >> *num;
}
void countDown(int num)
{
	for (int i = num; i > 0; i--) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;
}
int main()
{
	int num = 0;
	loadData("data.txt", &num);
	countDown(num);
	system("pause>0");
}