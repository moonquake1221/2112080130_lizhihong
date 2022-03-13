/* FileName: T2_19.cpp
 * Author:   Zhihong Li
 * Date:     Mar 6th,2022
 * College:  School of Computer Science and Information Engineering
 */




#include <iostream>

using namespace std;


int main()
{
    cout<<"Input three diffierent integers :" <<endl;
 int a,b,c,Sum,Average,Product,Smallest,Largest;
 cin>>a>>b>>c;
 Sum=a+b+c;
 Average=Sum/3;
 Product=a*b*c;
 int x;
 x=a;
 if(b>x)
    {x=b;}
 if(c>x)
    {x=c;}
int y;
 y=a;
 if(b<y)
    {y=b;}
 if(c<y)
    {y=c;}

    cout<<"Sum is "<<Sum<<endl;
    cout<<"Average is "<<Average<<endl;
    cout<<"Product is "<<Product<<endl;
    cout<<"Smallest is "<<y<<endl;
    cout<<"Largest is "<<x<<endl;

        return 0;
}
