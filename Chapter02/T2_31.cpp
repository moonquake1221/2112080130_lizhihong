/* FileName: T2_31.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */




#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,e,f,s;//a����ÿ�쿪����Ӣ������
                  //b����ÿ�������͵ļ۸�
                  //c����ÿ�������Ϳ��Կ���ƽ��Ӣ������
                  //d����ÿ�յ�ͣ���ѣ�
                  //e����ÿ�յ�ͨ�зѣ�
    cin>>a>>d>>e;
    b=4.17;
    c=26.4;
    f=a/c*b+e;//f����ÿ�쿪�����ѵļ�Ǯ��
    s=f-d;    //s�����ʡ��Ǯ��

    cout<<s;
    return 0;
}
