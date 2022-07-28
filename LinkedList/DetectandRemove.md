# Detect and Remove from LL
**DETECT A LOOP**
- Using map to store for each node is visited or not
- If the node is visited once and again visiting then the loop is present
- S.C. O(n) T.C. O(n)

## Detect a loop Using map solution
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
## Detect a loop using FLyod's cycle detection in LL
```
Node*  FloydsDetectionLoop(Node* head)
{
    if(head == NULL)
        return NULL;
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL)
            fast = fast->next;

        slow = slow->next;  

        if(slow == fast)
            return slow;
    }
    return NULL;
}

``` 