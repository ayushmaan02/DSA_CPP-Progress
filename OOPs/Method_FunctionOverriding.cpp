/*Rules
1. The name of the method in parent and child class should be same
2. The parameters should also be same
3. It is possible through inheritance only
*/

#include<iostream>
using namespace std;
class Human
{
    public:
        void speak()
        {
            cout<<"Speaking"<<endl; 
        }
};

class Dog: public Human
{
    public:
        void speak()
        {
            cout<<"Barking"<<endl;
        }
};



int main()
{
    Dog d1;
    Human h1;
    d1.speak();
    h1.speak();
    return 0;
}