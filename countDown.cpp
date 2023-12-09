#include<iostream>
void countDown(int num)
{
	for (int i = num; i > 0; i--) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;
}