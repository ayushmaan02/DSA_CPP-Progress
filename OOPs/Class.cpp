// We can include the class using the header file too
//By default the access modifier of the class elements are private
#include<iostream>
using namespace std;

class Hero 
{
    private:
        int health;
    public:
        char level;

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
};

int main() 
{
    //static allocation
    Hero h1;
    h1.level = 'A';
    h1.sethealth(80);
    cout<<"Health of hero 1 = "<<h1.gethealth()<<endl;      //getter 
    cout<<"Level of Hero 1 = "<<h1.level<<endl;
    
    //Dynamic Allocation
    Hero *h2 = new Hero;
    //To de-reference the pointer we can use the arrow mark (->)
    h2->sethealth(90);
    h2->setlevel('B');
    cout<<"Health of h2 = "<< h2->gethealth()<< endl;
    cout<<"Level of h2 = "<<h2->level<<endl;
    
    return 0;
}