/*
  FileName:T2_30.cpp
  Author:gaojinshuai
  E-mail:631701610@qq.com
  Time:Mar 12th,2022
  Function:evaluate BMI 
*/ 
#include <iostream>

using namespace std;

int main()
{
    int weight=0;
    double hight=0.0;
    cin>>weight>>hight;
    double bim=weight/(hight*hight)*1.0;
    cout<<bim<<endl;
    cout<<"BMI VALUES"<<endl;
    cout<<"Underweight:"<<"\t"<<"less than 18.5"<<endl;
    cout<<"Normal:      "<<"\t"<<"between 18.5 and 24.9"<<endl;
    cout<<"Overweight:"<<"\t"<<"between 25 and 29.9"<<endl;
    cout<<"Obese:        "<<"\t"<<"30 or greater"<<endl;
    return 0;
}
