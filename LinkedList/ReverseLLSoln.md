### Reverse LL Solution
-  Solved using 2 Pointer approach 
- Iterative
- Forward stores the rest of the list
- Current next stores the previous value 
- previous shift to current position 
- then current shift to forward

```
Node* reverseLinkedList(Node *head)
{
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }

        Node* prev = NULL;      
        Node* curr = head;
        Node* fwd = NULL;
        while(curr != NULL)
        {
            fwd = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = fwd;
        }

    return prev;
}
```