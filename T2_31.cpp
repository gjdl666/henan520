/*
  FileName:T2_31.cpp
  Author:gaojinshuai
  E-mail:631701610@qq.com
  Time:Mar 12th,2022
  Function:calculate cost¡£ 
*/ 
#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int money=0;
    int v=0;
    int moneytc=0;
    int moneytx=0;
    cin>>sum>>money>>v>>moneytc>>moneytx;
    cout<<money*sum/v+moneytc+moneytx<<endl;
    return 0;
}
