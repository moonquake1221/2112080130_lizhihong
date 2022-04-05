




/* FileName: T5_27.cpp
 * Author:   Zhihong Li
 * Date:     Mar 20th,2022
 * College:  School of Computer Science and Information Engineering
 */


#include <iostream>

using namespace std;

int main()
{
    for(unsigned int count=1;count<=10;count++)
    {
        if(count==5)count=6;
        cout<<count<<" ";
    }
    cout<<"\nUsed continue to skip printing 5"<<endl;
    return 0;
}
