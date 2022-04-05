/* FileName: T4_27.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   long int i=0,n,num=0,x;
    cin>>n;
    while(n!=0)
    {
        x=n%10;
        num+=(x)*(pow(2,i));
        n=n/10;
        i++;

    }

    cout<<num<<endl;



    return 0;
}
