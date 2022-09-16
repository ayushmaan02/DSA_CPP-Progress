# Containers and Iterators

-  Container [Vector](Vector.cpp)
-  Container [List](READEME.md)
-  Container [Deque](Deque.cpp)
-  Container [Stack](Stack.cpp)
-  Container [Vector](Deque.cpp)
-  Container [PriorityQueue](PriorityQueue.cpp)
-  Container [Set](Set.cpp)
-  Container [Map](Map.cpp)

```
 //Container 2 List
    list<int> l;
    l.push_back(2);     //{2}
    l.emplace_back(3);  //{2,3}

    l.push_front(5);    //{5,2,3}
```
```
// Pairs it comes under the utility header file
void pair()
{
    pair<int, int> p = {1, 2};

    cout << p.first << " " << p.second << endl;

    pair<int pair<int, int>> p1 = {1, {1, 2}}; // Nested pair

    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int,int> arr[] = {(10,11),(12,13),(14,15)};

    cout<<arr[1].second<<endl;
}
```

### STL 

*__builtin_popcount(x)* :-
`This function is used to count the number of one’s(set bits) in an integer. `
```
int num = 7;
int cnt = __builtin_popcount(num)   // It will return 3(Number of set bits in 7) 

long long num = 12345432567;
int cnt = __builtin_popcountll(num);
```

*next_permutation* :- 
`It is used to rearrange the elements in the range [first, last) into the next lexicographically greater permutation.`

```
string = "123";
sort(s.begin(),s.end());    //If the string is not sorted then sort it first
do
{
   cout<<s<<endl;
} while(next_permutation(s.begin(),s.end()));
```
*max_element* :- 
`It will return back you the address of the maximum element in your array it may be of integer,character,string or any type`
```
pair<int,int> a[] = {{1,2},{3,4},{5,6}};
int maxi = *max_element(a,a+n);  // return the maximum value at that address(n is the size of the array)
``` 
*min_element* :- 
`It will return back you the address of the minimum element in your array it may be of integer,character,string or any type`
```
pair<int,int> a[] = {{1,2},{3,4},{5,6}};
int mini = *min_element(a,a+n);  //return the minimum value at that address(n is the size of the array)
```