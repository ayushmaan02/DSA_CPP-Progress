# Middle of LL Solution
- Irerative operation and Optimized Solution
- We calculated the length of the LL
- We find the half of the LL
- We traverse the LL till the the half
- And then the half+1 node will be the answer
- T.C. O(n) S.C. = O(1)

## Iterative Solution
```
int getLength(Node* head)
{
    int len = 0;
    while(head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node* middleLL(Node* head)
{
    int len = getLength(head);
    int ans = len/2;

    Node* temp = head;
    int cnt = 0;
    while(cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }
    return temp;
}
```
## Optimized Solution
```
Node* middleofLL(Node* head)
{
    //If the node is empty or it has only one node
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    //If it has only 2 node then
    if(head -> next ->next ==  NULL)
    {
        return head ->next;
    }

    Node* jump1node = head;
    Node* jump2node = head->next;

    while(jump2node != NULL)
    {
        jump2node = jump2node -> next;
        if(jump2node != NULL)
        {
            jump2node = jump2node->next;
        }

        jump1node = jump1node->next;
    }
    return jump1node;
}
```