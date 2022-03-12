/*
  FileName:T2_26.cpp
  Author:gaojinshuai
  E-mail:631701610@qq.com
  Time:Mar 12th,2022
  Function:Print checkerboard to screen.
*/ 
#include <iostream>

using namespace std;

int main()
{
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;//第一种方法
    for(int i=1;i<=8;i++)
    {
        if(i%2==0)
            cout<<" * * * * * * * *"<<endl;
        else
            cout<<"* * * * * * * *"<<endl;
    }//第二种方法
    return 0;
}
