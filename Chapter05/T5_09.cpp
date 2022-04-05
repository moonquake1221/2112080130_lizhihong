/* FileName: T5_09.cpp
 * Author:   Zhihong Li
 * Date:     Mar 15th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;

int main()
{
    int s=1;
   for(int i=0;i<=15;i++){
    if(i%2==1){
        s=s*i;
    }
   }
   cout<<"1-15中奇数的乘积为"<<s;
       return 0;
}
