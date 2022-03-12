/*
  FileName:T2_19.cpp
  Author:gaojinshuai
  E-mail:631701610@qq.com
  Time:Mar 12th,2022
  Function:Print the add,average,product,smallest and largest to screen.
*/ 
#include <iostream>

using namespace std;

int max(int a,int b,int c)
{
    if(a>b&&a>c)
        return a;
    if(b>a&&b>c)
        return b;
    if(c>b&&c>a)
        return c;
}

int min(int a,int b,int c)
{
    if(a<b&&a<c)
        return a;
    if(b<a&&b<c)
        return b;
    if(c<b&&c<a)
        return c;
}

int main()
{
    int a=0;
    int b=0;
    int c=0;
    cout << "Input three different integers:";
    cin>>a>>b>>c;
    cout<<"Sum is "<<a+b+c<<endl;
    cout<<"Average is "<<(a+b+c)/3<<endl;
    cout<<"Product is "<<a*b*c<<endl;
    cout<<"Smallest is "<<min(a,b,c)<<endl;
    cout<<"Largest is "<<max(a,b,c)<<endl;
    return 0;
}
