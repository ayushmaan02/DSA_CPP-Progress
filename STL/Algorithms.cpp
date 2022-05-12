#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(12);
    v.push_back(14);
    v.push_back(18);
    v.push_back(20);
 
    cout<<"Finding 20 = "<<binary_search(v.begin(),v.end(),20)<<endl;                       //BINARY SEARCH
    cout<<"Lower bound = "<<lower_bound(v.begin(),v.end(),18) - v.begin()<<endl;            //LOWER BOUND
    cout<<"Upper bound = "<<upper_bound(v.begin(),v.end(),18) - v.begin()<<endl;            //UPPER BOUND

    int a = 10, b = 23;
    cout<<max(a,b)<<endl;                                                                   //MAXIMUM
    cout<<min(a,b)<<endl;                                                                   //MINIMUM
    swap(a,b);                                                                              //SWAPPING
    cout<<"A swapped with B = "<<a<<endl;
    string rev = "abcd";                    
    reverse(rev.begin(), rev.end());                                                        //REVERSE
    cout<<"Reversed string = "<<rev<<endl;

    rotate(v.begin(),v.begin()+1, v.end());                                                 //ROTATE rotate(start, mid, end);
    cout<<"Rotated vector = ";
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;

    sort(v.begin(),v.end());              //SORT It is bassed on the intro sort which is the mixture of [quick sort, heap sort and insertion sort]
    for(auto i:v)
        cout<<i<<" "; 
    cout<<endl;
}