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
        cout<<a<<" "<<b<<" "<<c<<"���Ա�ʾ�����ε�������";
    }else
    {
        cout<<a<<" "<<b<<" "<<c<<"���ܱ�ʾ�����ε�������";
    }
    return 0;
}
