#include<iostream>
using namespace std;
//LENGTH OF THE CHARACTER ARRAY
int getLength(char name[])
{
    int length = 0;
    for(int i=0; name[i]!='\0';i++)
        length++;
return length;
}

//REVERSE THE CHARACTER ARRAY
void reverse (char name[], int n)
{
    int s = 0,e = n-1;
    while(s<=e)
    {
        swap(name[s++],name[e--]);
    }
    cout<<"Reverse of the character array = "<<name<<endl; 
}


int main()
{
    char name[20];
    cin>>name; 
    int l = getLength(name);
    cout<<"Lenght of the name = "<<l<<endl;
    reverse(name,l);
    return 0;
}
