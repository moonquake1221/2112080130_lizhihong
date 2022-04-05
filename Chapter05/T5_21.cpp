/* FileName: T5_21.cpp
 * Author:   Zhihong Li
 * Date:     Mar 21th,2022
 * College:  School of Computer Science and Information Engineering
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i,x,y,t,j,l,h;
    cin>>i;
    switch(i)
    {
        case 1:cin>>x;cout<<"经理的工资为"<<x<<endl;break;
        case 2:cin>>y;cin>>h;if(h<=40)  cout<<"小时工的工资为"<<h*y<<endl;
                       else cout<<fixed<<setprecision(3)<<"小时工的工资为"<<(h-40)*1.5*y+40*y<<endl;break;
        case 3:cin>>t;cout<<fixed<<setprecision(3)<<"佣金工的工资为"<<250+t*0.057<<endl;break;
        case 4:cin>>j>>l;cout<<"计件工的工资为"<<j*l<<endl;break;
    }
    return 0;
}
