/* FileName: T4_34.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */

  // 编写程序求阶乘
#include <iostream>

using namespace std;

int main()
{
    int n,i=0,s=1;
    cin>>n;
    if(n==0||n==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        while(i<n)
    {
        i++;
        s=s*i;
    }
    cout<<s<<endl;
    }
    return 0;
}


//编写程序估算e(确定精度)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n,i=0,s=1,t,e=1;
    cin>>n;
    while(i<n)
    {
        i++;
        s=s*i;
        t=1.0/s;
        e+=t;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(n+1)<<"e="<<e<<endl;



 return 0;
}


//编写程序估算e(确定精度)
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double n,i=0,s=1,t,x,y=1;
    cin>>n>>x;
    while(i<n)
    {
        i++;
        s=s*i;
        t=1.0*pow(x,i)/s;
        y+=t;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(n+1)<<"y="<<y<<endl;
return 0;
}
