# Sort the LL

**Sort 0s 1s and 2s in the LL**

**APPROACH 1 REPLACING THE DATA**
- Take 3 counts for counting 0,1 and 2 respectively
- Traverse through the LL and count the 0,1 and 2 in the LL
- Then again traverse through the LL and for each count print the value in sorted manner

**APPROACH 2 REPLACING THE LINKS** (*When data replacement is not allowed*) 
- Take 3 dummy nodes
- Traverse through the list and compare the value at each node and then add it to tail of the node
- Then merge the all the 0s,1s,2s nodes 
- Delete all the dummy nodes 
> Codestudio questions

## Sort linked list of 0s 1s 2s
**APPROACH 1**
```
    T.C. = O(n) S.C. O(1)
Node* sortList(Node* head)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == 0)
            count0++;
        else if(temp->data == 1)
            count1++;
        else if(temp->data == 2)
            count2++;
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL)
    {
        if(count0 != 0)
        {
            temp->data = 0;
            count0--;
        }
        else if(count1 != 0)
        {
            temp->data = 1;
            count1--;
        }
        else if(count2 != 0)
        {
            temp->data = 2;
            count2--;
        }
    }
    return head;
}
```

**APPROACH 2**
```
    T.C O(n) S.C. O(1)
void insertAtTail(Node* &tail, Node* curr)
{
    tail -> next = curr;
    tail = curr; 
}
Node* sortList(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    //Created three LL for 0s,1s,2s
    while(curr != NULL)
    {
        int value = curr -> data;
        if(value == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1)
        {
            insertAtTail(oneTail, curr);
        }
        else if(value == 2)
        {
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }
    //Merge 3 LL
    // 1s wali list is non-empty
    if(oneHead -> next !=NULL)
    {
        zeroTail -> next = oneHead -> next;
    }
    else
    {
        // 1s List is empty then
        zeroTail -> next = twoHead -> next;
    }
    oneTail -> next = twoHead ->next;
    twoTail ->next = NULL;
    
    // Head pointing
    head = zeroHead -> next;
    
    // deleting the dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}
```