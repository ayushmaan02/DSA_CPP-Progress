# Merge 2 Sorted LL
- Check both the list which one's first data is smaller assign it as the first list
- If 1st LL has only one node then add the data of 2nd LL and return the 1st LL
- Then check first -> data <=  curr2 -> data <= next1 -> data
- then add the curr2 node in the first list between the curr1 and next1 node and update the pointers
- else update the curr1 pointer and next1 too 
- If the next1 ->next is NULL then add all the data of 2nd LL to first one and return the 1st LL
> Codestudio questions

## Solution 
```
    T.C. O(1) S.C = O(1)
    Node<int>* solve(Node<int>* first, Node<int>* second)
{
    //if only 1 element is present in the LL
    if(first -> next == NULL)
    {
        first ->next = second;
        return first;
    }
    
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1 -> next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2 -> next;
    
    // For more then one element in the both tht LL
    while(next1 != NULL && curr2 != NULL)
    {
        if((curr2 -> data >= curr1 -> data)&& (curr2 -> data <= next1 -> data))
        {
            //Adding the node from second LL to first LL to merge both the LL
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;
            //Updating the pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            //Move forward curr1 and next1  
            curr1 = next1;
            next1 = next1 -> next;
            if(next1 == NULL)
            {
                curr1 -> next = curr2;
                return first;
            }
        }
    }
    return first;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL)
        return second;
    if(second ==  NULL)
        return first;
    if(first -> data <= second -> data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}

```