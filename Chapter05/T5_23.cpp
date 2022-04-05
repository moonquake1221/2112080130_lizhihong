
/* FileName: T5_23.cpp
 * Author:   Zhihong Li
 * Date:     Mar 20th,2022
 * College:  School of Computer Science and Information Engineering
 */


#include <iostream>

using namespace std;

int main()
{
    int j,i;
    for( i=1;i<=5;i++)
    {
        for( j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for( i=1;i<=4;i++)
    {
        for( j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=9-2*i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
