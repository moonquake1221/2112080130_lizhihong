/* FileName: T2_28.cpp
 * Author:   Zhihong Li
 * Date:     Mar 6th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;


int main()
{
  int a,b,c,d,e,f;
  cin>>a;
  b=a%10;
  c=a/10%10;
  d=a/100%10;
  e=a/1000%10;
  f=a/10000;
  cout<<f<<"   "<<e<<"   "<<d<<"   "<<c<<"   "<<b<<endl;

    return 0;
}
