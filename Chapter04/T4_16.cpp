/* FileName: T4_16.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */





#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,s;
   cout<<"Enter hours worked(-1 to end):";
   cin>>a;

   while(a!=-1)
   {

    cout<<"Enter hourly rate of the employee($00.00):";
    cin>>b;
    if(a<=40){
        s=1.0*a*b;
    } else{
        s=1.0*(a*b+(a-40)*b*0.5);
    }
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<"Salary is:$"<<s<<endl;
    cout<<endl;

    cout<<"Enter hours worked(-1 to end):";
    cin>>a;
   }
    return 0;
}
