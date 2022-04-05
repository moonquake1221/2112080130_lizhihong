/* FileName: T5_12.cpp
 * Author:   Zhihong Li
 * Date:     Mar 20th,2022
 * College:  School of Computer Science and Information Engineering
 */




#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int a=10;a>=1;a--)
    {

        for(int b=1;b<=a;b++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;


   for(int x=1;x<=10;x++)
    {
        for(int z=1;z<=x;z++)
        {
            cout<<" ";
        }
        for(int y=10;y>=x;y--)
        {
            cout<<"*";
        }
       cout<<endl;

    }
    cout<<endl;


    for(int x=1;x<=10;x++)
    {
        for(int z=9;z>=x;z--)
        {
            cout<<" ";
        }
        for(int y=1;y<=x;y++)
        {
            cout<<"*";
        }
       cout<<endl;

    }
    cout<<endl;
    return 0;
}
