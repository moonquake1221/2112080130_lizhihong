/* FileName: T4_20.cpp
 * Author:   Zhihong Li
 * Date:     Mar 15th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>

using namespace std;

int main()
{
     unsigned int passes=0;
     unsigned int failures=0;
     unsigned int studentCounter=1;
         int result;
         cout<<"Enter result(1=pass,2=fail):";
         cin>>result;
     while(studentCounter<=10)
     {

         if(result==1||result==2){
               if(result==1)
         {
             passes=passes+1;
         }
              else if(result==2)
         {
         failures=failures+1;
         }
            studentCounter=studentCounter+1;
             cout<<"Enter result(1=pass,2=fail):";
            cin>>result;
         }else
         {cout<<"Enter result(1=pass,2=fail):";
         cin>>result;
         }
     }
     cout<<"Passed"<<passes<<"\nFailed"<<failures<<endl;
     if(passes>8)
     {
         cout<<"Bonus to instructor!"<<endl;
     }
    return 0;
}
