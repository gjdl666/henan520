/*
  FileName:T2_5.cpp
  Author:gaojinshuai
  E-mail:631701610@qq.com
  Time:Mar 12th,2022
  Function:Print three numbers product to screen.
*/ 
#include<iostream>

using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	int result = 0;
	std::cout << "输入三个整数： " << endl;
	std::cin >> x >> y >> z;
	result = x * y * z;
	std::cout << "The product is" << result << endl;
	return 0;
}
