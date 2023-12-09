#include<iostream>
void countDown(int num)
{
	for (int i = num; i > 0; i--) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;
}
int main()
{
	int num = 5;
	countDown(num);
	system("pause>0");
}