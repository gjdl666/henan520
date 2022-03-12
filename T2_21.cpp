/*
  FileName:T2_21.cpp
  Author:gaojinshuai
  E-mail:631701610@qq.com
  Time:Mar 12th,2022
  Function:Print rectangle£¬ellipse£¬arrow and diamond to screen.
*/ 
#include <iostream>

using namespace std;

int main()
{
    int n=0;
    for(n=1;n<=9;n++)
    {
        if(n==1||n==9)
            cout<<"*********"<<endl;
        else
            cout<<"*       *"<<endl;
    }
    for(n=1;n<=9;n++)
    {
        if(n==1||n==9)
            cout<<"   ***   "<<endl;
        else if(n==2||n==8)
            cout<<" *     * "<<endl;
        else
            cout<<"*       *"<<endl;
    }
    for(n=1;n<=9;n++)
    {
        if(n==1||(n>=4&&n<=9))
            cout<<"  *  "<<endl;
        else if(n==2)
            cout<<" *** "<<endl;
        else
            cout<<"*****"<<endl;
    }
    for(n=1;n<=9;n++)
    {
        if(n==1||n==9)
            cout<<"    *    "<<endl;
        if(n==2||n==8)
            cout<<"   * *   "<<endl;
        if(n==3||n==7)
            cout<<"  *   *  "<<endl;
        if(n==4||n==6)
            cout<<" *     * "<<endl;
        if(n==5)
            cout<<"*       *"<<endl;
    }
    return 0;
}
