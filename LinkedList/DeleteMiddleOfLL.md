# Delete Middle of the LL
- Find the middle of the LL by using fast and slow concept 
- Initialize a pointer curr = NULL
- Then while finding the middle increase the curr pointer by one node
- Then after getting the middle node point the curr node's next to the middle node's next 
- Then make slow -> next as NULL
>Code Studio


# Solution
```
Node<int>* deleteMiddle(Node<int>* head)
{
    //When there is empty-list and with one element according to constraints the o/p should be NULL
    if(head == NULL && head -> next == NULL)
        return NULL;

    //If the list contain 2 nodes
    if(head -> next -> next == NULL)
        return head -> next;

    //Non-Empty list
    Node<int>* slow = head;
    Node<int>* fast = head -> next;
    Node<int>* curr = NULL;
    while(fast != NULL && fast -> next != NULL)
    {
        curr = slow;
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    cur -> next = slow -> next;
    slow -> next = NULL;
} 
```