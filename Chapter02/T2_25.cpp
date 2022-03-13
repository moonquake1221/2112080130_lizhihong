/* FileName: T2_25.cpp
 * Author:   Zhihong Li
 * Date:     Mar 6th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;


int main()
{
  int a,b,c;
  cin>>a>>b;
  c=a%b;
  if(c==0)
    {
        cout<<"a是b的倍数";
    }
    else
    {cout<<"a不是b的倍数";
    }
    return 0;
}
