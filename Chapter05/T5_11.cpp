/* FileName: T5_11.cpp
 * Author:   Zhihong Li
 * Date:     Mar 15th,2022
 * College:  School of Computer Science and Information Engineering
 */






#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
double amount;
double principal=1000.0;
for (double rate=.05;rate<.1;rate=rate+.01)
{
cout<<"Year"<<setw(21)<<"Amount on deposit"<<endl;
cout<<fixed<<setprecision(2);
for(unsigned int year=1;year<=10;++year)
{
    amount=principal*pow(1.0+rate,year);
    cout<<setw(4)<<year<<setw(21)<<amount<<endl;
}
}
    return 0;
}
