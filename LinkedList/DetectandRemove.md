# Detect and Remove from LL
- Using map to store for each node is visited or not
- If the node is visited once and again visiting then the loop is present


## Using map solution
```
bool detectLoop(Node* head)
{
    if(head == NULL)
    {
        return false;
    }
    map<Node*, bool>visited;

    Node* temp = head;
    while(temp != NULL)
    {
        if(visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
```