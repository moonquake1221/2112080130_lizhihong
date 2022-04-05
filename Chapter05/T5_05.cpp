/* FileName: T5_05.cpp
 * Author:   Zhihong Li
 * Date:     Mar 15th,2022
 * College:  School of Computer Science and Information Engineering
 */




#include <iostream>

using namespace std;

int main()
{
    int a,m[10],sum=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>m[i];
        sum+=m[i];
    }
    cout<<"sum="<<sum;
    return 0;
}
