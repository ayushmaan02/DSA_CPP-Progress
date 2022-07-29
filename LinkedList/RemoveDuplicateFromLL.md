# Remove Duplicate form LL
**Remove Duplicates From Sorted List**
- Take a current node and initialize it to head
- Compare the current node to its neighbouring node and if they both are same then 
- delete the neighbouring node then
- Link the current node to the node which is next to the deleted node
- Else this is not then simply move forward the current node.

**Remove Duplicates From Un-Sorted List**

## Remove Duplicates From Sorted List
```
Node * uniqueSortedList(Node * head) 
{
    //List is empty
    if(head == NULL)
        return NULL;
    //Non-Empty list
    Node* curr = head;
    while(curr != NULL)
    {
        if((curr -> next != NULL) && (curr -> data == cur -> next -> data))
        {
            Node* next_next = curr -> next ->next; 
            Node* NodeToDelete = curr -> next;
            delete(NodeToDelete);
            curr -> next = next_next;
        }
        else
        {
            curr = curr -> next;
        }
    }
    return head;
}
```