/* FileName: T4_28.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */

#include <iostream>

using namespace std;

int main()
{
     unsigned int row=0,column=0;

     for(row=0;row<8;row++){
   if(row%2==0)
     {
         for(column=0;column<8;column++){
         cout<<"* ";
     }
     }
    if(row%2==1)
     {
         cout<<' ';
         for(column=0;column<8;column++){
         cout<<"* ";

     }

     }
     cout<<endl;
     }


    return 0;
}
