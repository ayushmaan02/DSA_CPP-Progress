# Sort the LL

**Sort 0s 1s and 2s in the LL**
- Take 3 counts for counting 0,1 and 2 respectively
- Traverse through the LL and count the 0,1 and 2 in the LL
- Then again traverse through the LL and for each count print the value in sorted manner

## Sort linked list of 0s 1s 2s
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