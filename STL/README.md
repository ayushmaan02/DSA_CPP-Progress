# Containers and Iterators

-  Container [Vector](Vector.cpp)
-  Container [List](READEME.md)
-  Container [Deque](Deque.cpp)
-  Container [Stack](Stack.cpp)
-  Container [Vector](Deque.cpp)
-  Container [PriorityQueue](PriorityQueue.cpp)

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