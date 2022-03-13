/* FileName: T2_31.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */




#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,e,f,s;//a代表每天开的总英里数；
                  //b代表每加仑汽油的价格；
                  //c代表每加仑汽油可以开的平均英里数；
                  //d代表每日的停车费；
                  //e代表每日的通行费；
    cin>>a>>d>>e;
    b=4.17;
    c=26.4;
    f=a/c*b+e;//f代表每天开车花费的价钱；
    s=f-d;    //s代表节省的钱；

    cout<<s;
    return 0;
}
