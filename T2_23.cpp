/*
  FileName:T2_23.cpp
  Author:gaojinshuai
  E-mail:631701610@qq.com
  Time:Mar 12th,2022
  Function:Print large and small number to screen.
*/ 
#include <iostream>

using namespace std;

int main()
{
    int a[5];
	for(int i=0;i<5;i++)
	cin>>a[i];
	int large=a[0];
	int small=a[0];
	for(int i=1;i<5;i++)
	{
		if(large<a[i])
		large=a[i];
		if(small>a[i])
		small=a[i];
	}
	cout<<large<<" "<<small;
    return 0;
}
