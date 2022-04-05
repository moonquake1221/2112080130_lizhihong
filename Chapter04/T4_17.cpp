/* FileName: T4_17.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;

int main()
{
    int counter=0,number[10],largest;
     largest=number[0];

    while(counter<10)
        {
            counter++;
            cin>>number[counter];

            if(number[counter]>number[0])
                {
                largest=number[counter];
            }

    }
      cout<<"largest is "<<largest<<endl;

    return 0;
}
