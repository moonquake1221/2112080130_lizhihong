/* FileName: T4_36.cpp
 * Author:   Zhihong Li
 * Date:     Mar 15th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c,d;
    int p,q,s,t;
    cin>>x;
    cout<<"加密后的数据为"<<x<<endl;
    a=x/1000;
    b=x%1000/100;
    c=x%100/10;
    d=x%10;
   p=c+3;
   q=d+3;
   s=a+3;
   t=b+3;
    cout<<"原始密码为"<<p<<q<<s<<t;
    return 0;
}
