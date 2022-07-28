# Detect and Remove from LL
**DETECT A LOOP**
- Using map to store for each node is visited or not
- If the node is visited once and again visiting then the loop is present
- Using **Flyod's cycle detction algorithm** where we use two pointers 
- Slow traverse one node at a time and fast traverse 2 nodes at a time 
- If slow and fast meets then the loop is detected in LL otherwise no loop present

**DETECT THE STARTING/BEGNING NODE OF THE LOOP**

- Using FCD we found the position where the two pointers will be intersecting
- then we shift the slow pointer to the head and then 
- started to traverse the slow and the that intersection pointer one by one 
- then after some time they will meet at and where they will be meeting will be the starting node of the loop 

## Detect a loop Using map solution
```
    S.C. O(n) T.C. O(n)
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
 S.C. O(1) T.C. O(n)
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

## Detect the begining/starting node of the loop
```
Node* getTheStartingNodeofLoop(Node* head)
{
    if(head == NULL)
        return NULL;
    Node* intersection = FloydsDetectionLoop(head);
    Node* slow = head;

    while(slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
```

## Remove the loop
```
void RemoveTheLoop(Node* head)
{
    if(head == NULL)
        return;
    Node* startNodeOfLoop = getTheStartingNodeofLoop(head);
    Node* temp = startNodeOfLoop;
    while(temp -> next != startNodeOfLoop)
    {
        temp = temp ->next;
    }
    temp->next = NULL;
}
```