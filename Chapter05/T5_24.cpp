/* FileName: T5_24.cpp
 * Author:   Zhihong Li
 * Date:     Mar 20th,2022
 * College:  School of Computer Science and Information Engineering
 */


#include <iostream>

using namespace std;

int main()
{
    int j,i,n;
    cin>>n;
    for( i=1;i<=(n+1)/2;i++)
    {
        for( j=1;j<=(n+1)/2-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for( i=1;i<=(n+1)/2-1;i++)
    {
        for( j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*(n+1)/2-1-2*i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
