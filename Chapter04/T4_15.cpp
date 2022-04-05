/* FileName: T4_15.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */





#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b;
   cout<<"Enter sales in dollars(-1 to end):";
   cin>>a;
   while(a!=-1)
   {
   b=1.0*(200+a*0.09);
  cout<<setiosflags(ios::fixed)<<setprecision(2)<<"Sales is:$"<<b<<endl;
   cout<<endl;
   cout<<"Enter sales in dollars(-1 to end):";
   cin>>a;
   }
    return 0;
}
