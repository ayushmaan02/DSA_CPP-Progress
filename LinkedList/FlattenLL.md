# Flatten a Linked List 
- Create 2 LL then solve for down one and recursively call for the right part
- Then merge both the LL
>Code Studio
```
Node* merge(Node* down, Node* right)
{   
    Node* ans = new Node(-1);
    Node* temp = ans;
    while(down != NULL && right != NULL)
    {
    if(down -> data <= right ->data)
    {
        temp -> child = down;
        down = down ->child;
        temp = temp -> child;
        temp -> next = NULL;
    }
    else
    {
        temp -> child = right;
        right = right ->child;
        temp = temp -> child;
        temp -> next = NULL;
    }
    }
    
    if(down != NULL)
        temp -> child = down;
    if(right != NULL)
        temp -> child = right;
    
    return ans -> child;
}
Node* flattenLinkedList(Node* head) 
{
    if(head == NULL || head -> next == NULL)
        return head;
    head-> next = flattenLinkedList(head -> next);
    Node* ans = merge(head, head -> next);
    return ans;
}

```