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
    cout<<" * * * * * * * *"<<endl;//��һ�ַ���
    for(int i=1;i<=8;i++)
    {
        if(i%2==0)
            cout<<" * * * * * * * *"<<endl;
        else
            cout<<"* * * * * * * *"<<endl;
    }//�ڶ��ַ���
    return 0;
}
