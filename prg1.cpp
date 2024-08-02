// C++ program to compute the total and average of four numbers
#include<iostream>
using namespace std;

int main()
{
    float n1,n2,n3,n4,total=0,avg=0;
    cout<<"Compute the total and average of four numbers:"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"\nInput 1st two numbers (seperated by space):";
    cin>>n1>>n2;
    cout<<"\nInput last two numbers (seperated by space):";
    cin>>n3>>n4;
    total=n1+n2+n3+n4;
    avg=total/4;
    cout<<"\nThe total of four numbers is: "<<total;
    cout<<"\nThe average of four numbers is: "<<avg;

}