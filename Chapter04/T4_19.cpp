/* FileName: T4_19.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */




#include <iostream>

using namespace std;

int main()
{
   int i=0,a[10],max,maxsecond;
     max=a[0];
     maxsecond=a[0];

    while(i<10)
        {
            i++;
            cin>>a[i];


            if(a[i]>max)
                {
                maxsecond=max;
                max=a[i];
            } else if(maxsecond<a[i])
            {
                maxsecond=a[i];
            }

        }



      cout<<"max is "<<max<<endl;
       cout<<"maxsecond is "<<maxsecond<<endl;
    return 0;
}
