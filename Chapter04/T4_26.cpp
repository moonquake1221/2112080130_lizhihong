/* FileName: T4_26.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;

int main()
{
    char a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a==e&&b==d)
    {
        cout<<a<<b<<c<<d<<e<<"是回文数"<<endl;
    } else
     {
         cout<<a<<b<<c<<d<<e<<"不是回文数"<<endl;
    }
    return 0;
}
