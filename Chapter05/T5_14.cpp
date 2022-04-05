/* FileName: T5_14.cpp
 * Author:   Zhihong Li
 * Date:     Mar 20th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int a,b;
   double c1,c2,c3,c4,c5,x;
   cin>>a>>b;
   switch(a)
   {

       case 1: c1=b*2.98;
       case 2: c2=b*4.50;
       case 3: c3=b*9.98;
       case 4: c4=b*4.49;
       case 5: c5=b*6.87;
       cin>>a>>b;

   }
 x=c1+c2+c3+c4+c5;
   cout<<fixed<<setprecision(2)<<x<<endl;
    return 0;
}
