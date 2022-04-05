/* FileName: T5_16.cpp
 * Author:   Zhihong Li
 * Date:     Mar 22th,2022
 * College:  School of Computer Science and Information Engineering
 */






#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a,b,t;
double amount;
int principal=1000;
double rate=.05;

cout<<"Year       "<<setw(21)<<"   Amount on deposit"<<endl;

for(unsigned int year=1;year<=10;++year)
{
    amount=principal*pow(1.0+rate,year);
    t=amount*100;
    a=t/100;
    b=t%100;
    cout<<setw(4)<<year<<setw(21)<<a<<"."<<b<<endl;
}

    return 0;
}
