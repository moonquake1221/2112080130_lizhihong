/* FileName: T2_29.cpp
 * Author:   Zhihong Li
 * Date:     Mar 6th,2022
 * College:  School of Computer Science and Information Engineering
 */

#include <iostream>

using namespace std;

int main()
{
    int square,cube;
    cout << "integer square  cube" << endl;

for (int i=0;i<4;++i){
        square=i*i;
        cube=i*i*i;
        cout<<i<<"       "<<square<<"       "<<cube<<"\t"<<endl;
    }

 for(int i=4;i<10;++i){
         square=i*i;
         cube=i*i*i;
        cout<<i<<"       "<<square<<"      "<<cube<<"\t"<<endl;
    }

for( int i=10;i<11;++i){
          square=i*i;
          cube=i*i*i;
        cout<<i<<"      "<<square<<"     "<<cube<<"\t"<<endl;
    }
    return 0;
}
