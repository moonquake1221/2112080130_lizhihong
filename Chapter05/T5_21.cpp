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
        case 1:cin>>x;cout<<"����Ĺ���Ϊ"<<x<<endl;break;
        case 2:cin>>y;cin>>h;if(h<=40)  cout<<"Сʱ���Ĺ���Ϊ"<<h*y<<endl;
                       else cout<<fixed<<setprecision(3)<<"Сʱ���Ĺ���Ϊ"<<(h-40)*1.5*y+40*y<<endl;break;
        case 3:cin>>t;cout<<fixed<<setprecision(3)<<"Ӷ�𹤵Ĺ���Ϊ"<<250+t*0.057<<endl;break;
        case 4:cin>>j>>l;cout<<"�Ƽ����Ĺ���Ϊ"<<j*l<<endl;break;
    }
    return 0;
}
