



/* FileName: T5_25.cpp
 * Author:   Zhihong Li
 * Date:     Mar 20th,2022
 * College:  School of Computer Science and Information Engineering
 */


#include <iostream>

using namespace std;

int main()
{
    unsigned int count;
    for(count=1;count<=10;count++)
    {

        cout<<count<<" ";
        if(count==5)count=10;
    }
    cout<<"\nBroke out of loop at count = "<<count-6<<endl;
    return 0;
}
