/* FileName: T4_33.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
    {
        cout<<a<<" "<<b<<" "<<c<<"可以表示直角三角形的三条边";
    }else
    {
        cout<<a<<" "<<b<<" "<<c<<"不能表示直角三角形的三条边";
    }
    }

    else
    {
        cout<<a<<" "<<b<<" "<<c<<"不能构成三角形";
    }

    return 0;
}
