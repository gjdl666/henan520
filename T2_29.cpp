/*
  FileName:T2_29.cpp
  Author:gaojinshuai
  E-mail:631701610@qq.com
  Time:Mar 12th,2022
  Function:Print a chart to screen.
*/ 
#include <iostream>

using namespace std;

int main()
{
    cout<<"integer\t"<<"square\t"<<"cube"<<endl;;
    for(int i=0;i<=10;i++)
    {
        cout<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
    }
    return 0;
}
