#include<iostream>
#include"loadData.h"
#include"countDown.h"
int main()
{
	int num = 0;
	loadData("data.txt", &num);
	countDown(num);
	system("pause>0");
}