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
        cout<<a<<" "<<b<<" "<<c<<"���Ա�ʾֱ�������ε�������";
    }else
    {
        cout<<a<<" "<<b<<" "<<c<<"���ܱ�ʾֱ�������ε�������";
    }
    }

    else
    {
        cout<<a<<" "<<b<<" "<<c<<"���ܹ���������";
    }

    return 0;
}
