/* FileName: T5_06.cpp
 * Author:   Zhihong Li
 * Date:     Mar 15th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;

int main()
{
    int sum=0,av,a=0;
    int i;
    cin>>i;
    for(;i!=9999;cin>>i)
    {
        sum+=i;
        a++;
        av=sum/a;
    }
    cout<<"average="<<av;
    return 0;
}
