/*
  FileName:T2_18.cpp
  Author:gaojinshuai
  E-mail:631701610@qq.com
  Time:Mar 12th,2022
  Function:Print the largest number to screen.
*/ 
#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    cin>>a>>b;
    if(a>b)
        cout<<a<<"is large";
    if(a<b)
        cout<<b<<"is large";
    if(a==b)
        cout<<"The numbers are equal";
    return 0;
}
