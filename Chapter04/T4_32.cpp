/* FileName: T4_32.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        cout<<a<<" "<<b<<" "<<c<<"可以表示三角形的三条边";
    }else
    {
        cout<<a<<" "<<b<<" "<<c<<"不能表示三角形的三条边";
    }
    return 0;
}
