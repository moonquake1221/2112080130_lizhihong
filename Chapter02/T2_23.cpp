/* FileName: T2_23.cpp
 * Author:   Zhihong Li
 * Date:     Mar 6th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;


int main()
{
  int a[5];
  int max,min;
  for(int i=0;i<5;i++){
      cin>>a[i];
  }
  max=a[0];
  min=a[0];
  for(int i=0;i<5;i++){
    if(max<a[i])
       {
           max=a[i];
       }
    if(min>a[i])
       {
          min=a[i];
       }
  }
  cout<<"max="<<max<<endl;
  cout<<"min="<<min<<endl;
    return 0;
}
