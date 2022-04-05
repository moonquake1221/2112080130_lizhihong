/* FileName: T5_15.cpp
 * Author:   Zhihong Li
 * Date:     Mar 20th,2022
 * College:  School of Computer Science and Information Engineering
 */






#include <iostream>

using namespace std;

int main()
{
    char n;
    int a=0,b=0,c=0,d=0,f=0,suma=0,sumb=0,sumc=0,sumd=0,sumf=0;
    double ave;
    while(cin>>n)
    {
        if(n=='E')break;
        switch(n)
        {
        case 'A':a++;suma+=4;break;
        case 'B':b++;sumb+=3;break;
        case 'C':c++;sumc+=2;break;
        case 'D':d++;sumd+=1;break;
        case 'F':f++;sumf+=0;break;
        }
    }
    ave=1.0*(suma+sumb+sumc+sumd+sumf)/(a+b+c+d+f);
    cout<<ave;
    return 0;
}
