/* FileName: T4_25.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"*"<<endl;
    }else
    {
        for(int i=1;i<=n;i++){
            cout<<"*";
            for(int j=1;j<=n-2;j++){
                if(i!=1&&i!=n){
                    cout<<" ";
                }else {
                cout<<"*";
                }

            }
            cout<<"*"<<endl;
        }
    }



    return 0;
}
