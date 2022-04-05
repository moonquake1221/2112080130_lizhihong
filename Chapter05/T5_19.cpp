/* FileName: T5_19.cpp
 * Author:   Zhihong Li
 * Date:     Mar 21th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float pi=0;
    float i=1;
    int j=0;
    cout<<"前j项"<<"    "<<"pi的值为"<<endl;
    while(j<1000)
    {
         j++;
          i=2*j-1;
        if(j%2==0) {pi=1.0*(pi-4/i);}
        else {pi=1.0*(pi+4/i);}



        cout<<j<<"\t"<<fixed<<setprecision(10)<<pi<<"\t"<<endl;

    }


    return 0;
}
