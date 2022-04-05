/* FileName: T5_22.cpp
 * Author:   Zhihong Li
 * Date:     Mar 20th,2022
 * College:  School of Computer Science and Information Engineering
 */






#include <iostream>

using namespace std;

int main()
{
    int x,y,a,b,i,j,g;
    cin>>x>>y;
    if(!(x<5)&&!(y>=7))
    {
        cout<<"1";
    }
    if(!((x<5)||(y>=7)))
    {
        cout<<"1"<<endl;
    }
      cin>>a>>b>>g;
    if(!(a==b)||!(g!=5))
    {
         cout<<"2";
     }
     if(!((a==b)&&(g!=5)))
    {
         cout<<"2"<<endl;
     }
     if(!((x<=8)&&(y>4)))
        {
            cout<<"3";
        }
    if(!(x<=8)||!(y>4))
        {
            cout<<"3"<<endl;
        }
        cin>>i>>j;

       if(!(i>4)||(j<=6))
       {
           cout<<"4";
       }
       if(!(i>4)&&!(j<=6))
       {
           cout<<"4"<<endl;
       }
            return 0;
}
