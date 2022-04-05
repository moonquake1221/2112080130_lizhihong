/* FileName: T5_08.cpp
 * Author:   Zhihong Li
 * Date:     Mar 15th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;

int main()
{
    int a,b[10];
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    int min=b[0];

    for(int i=0;i<a;i++){
      if(b[i]<min)
    {
        min=b[i];
    }
    }

    cout<<"min="<<min;
    return 0;
}
