# Reverse LL Solution
-  Solved using 2 Pointer approach 
- Iterative and Recursive
- Forward stores the rest of the list
- Current next stores the previous value 
- previous shift to current position 
- then current shift to forward
> Codestudio questions

## Iterative Solution
```
    T.C = 0(n), S.C. = 0(1)
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
## Recursive Solution

```
    T.C = 0(n), S.C. = 0(n)
Node* reverse(Node* head)
{
    //base case
    if(head == NULL || Head -> next == NULL)
    {
        return head;
    }

    Node* chotaHead = reverse(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return chotaHead;
}
```