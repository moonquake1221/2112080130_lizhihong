/* FileName: T4_14.cpp
 * Author:   Zhihong Li
 * Date:     Mar 15th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,ch,cr,l,n;
    cout<<"Enter account number (or -1 to quit):";
    cin>>a;
    while(a!=-1)
        {
    cout<<"Enter beginning balance:";
    cin>>b;
    cout<<"Enter total charges:";
    cin>>ch;
    cout<<"Enter total credits:";
    cin>>cr;
    cout<<"Enter credit limit:";
    cin>>l;
    n=b+ch-cr;
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<"New balace is:"<<n<<endl;
    if(n>l){
        cout<<"Account:     "<<a<<endl;
        cout<<"Credit limit:"<<l<<endl;
        cout<<"Balance:     "<<n<<endl;
        cout<<"Credit Limit Exceeded."<<endl;
        cout<<endl;
    }else{
    cout<<endl;
    }
    cout<<"Enter account number (or -1 to quit):";
    cin>>a;
        }



    return 0;
}
