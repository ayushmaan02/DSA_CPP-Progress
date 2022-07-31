# Delete a Node in the LL without using head
- You are given with the node to delete 
- Initialize a new node and assign it to next of node to delete
- Then copy the value of the next node to the node to delete
- Then copy the link of the neighbouring node to the node to delete
- Then delete the new node
> Codestudio questions  

```
void deleteNode(Node* node)
{
    Node* next_node = node->next;
    node -> data = ndoe -> next ->data;
    node -> next = node -> next ->next;
    delete next_node;
}
```