#include<iostream>
using namespace std;
class Human 
{
    public:
        int height;
        int weight;
        int age;
    int getAge(){
        return this -> age;
    }

    void setWeight(int w){
         this->weight = w;
    }
};

class Male : public Human
{
    public:
        string color;
    void sleep()
    {
        cout<<"Male is sleeping "<<endl;
    }
};

int main()
{
    Male obj;
    cout<<"Age = "<<obj.age<<endl;
    cout<<"Weight = "<<obj.weight<<endl;
    cout<<"Height = "<<obj.height<<endl;
    cout<<"Color = "<<obj.color<<endl;
    return 0;
}