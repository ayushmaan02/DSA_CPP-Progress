#include<iostream>
#include<array>
using namespace std;

int main()
{
    int basic[3] = {1,2,3};
    array<int,4> a = {1,2,3,4};   // Static h yhe array basically depend karta h ki basic array phele initialize hona chaiye 

    int size = a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"Element of 'a' at 2nd index = "<<a.at(2)<<endl;
    cout<<"Empety or not = "<<a.empty()<<endl;  //Boolean value of saying array is empty or not 
    cout<<"1st element = "<<a.front()<<endl;
    cout<<"Last element = "<<a.back()<<endl;
}