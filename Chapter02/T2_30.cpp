/* FileName: T2_30.cpp
 * Author:   Zhihong Li
 * Date:     Mar 12th,2022
 * College:  School of Computer Science and Information Engineering
 */




#include <iostream>

using namespace std;

int main()
{
    double h,w,BMI;
    cin>>h>>w;
    BMI=w/(h*h);
    cout<<"My BMI is "<<BMI<<endl;
    cout<<endl;
    cout<<"BMI VALUES"<<endl;
    cout<<"Underweight: less than 18.5"<<endl;
    cout<<"Normal:      between 18.5 and 24.9"<<endl;
    cout<<"Overweight:  between 25 and 29.9"<<endl;
    cout<<"Obese:       30 or greater"<<endl;


    return 0;
}
