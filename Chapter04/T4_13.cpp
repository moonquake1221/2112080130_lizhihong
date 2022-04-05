/* FileName: T4_13.cpp
 * Author:   Zhihong Li
 * Date:     Mar 15th,2022
 * College:  School of Computer Science and Information Engineering
 */



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m[10],g[10],i;
    double MPG,n,a=0.0,b=0.0;


   while(m[i]!=-1)
    {
        for(i=0;;i++){
        cout<<"Enter miles driven(-1 to quit):";
        cin>>m[i];
        if(m[i]==-1)
        {
            break;
        }
        cout<<"Enter gallons used:";
        cin>>g[i];


         MPG=1.0*m[i]/g[i];
         a+=m[i];
         b+=g[i];
         n=a/b;
        cout<<setiosflags(ios::fixed)<<setprecision(6)<<"MPG this trip:"<<MPG<<endl;

        cout<<setiosflags(ios::fixed)<<setprecision(6)<<"Total MPG:"<<n<<endl;
        cout<<endl;



    }
    }
    return 0;
}




