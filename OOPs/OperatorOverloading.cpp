#include<iostream>
using namespace std;

class B
{
    public:
    int a, b;

    int add()
    {
        return a+b;
    }

    void operator + (B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Value after overloading = "<< value2 - value1 << endl;
    }
};

int main()
{
    B obj1, obj2;
    obj1.a = 5;
    obj2.a = 10;

    obj1+obj2;
    return 0;
}