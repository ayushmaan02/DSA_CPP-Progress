# Reverse List In K Groups LL
- Step 1 Reverse the LL using the reverse concept for initial k group
- Step 2 recursive call initiated for the remaining part
- Step 3 return the prev as the head for the reverse LL will be pointed by that only


## Recursive Solution
```

Node* kReverse(Node* head, int k) {
    // Write your code here.
    //base case
    if(head == NULL)
    {
        return NULL;
    }
    
    //step 1 reverse the LL for first k group
    Node* prev = NULL;
    Node* curr = head;
    Node* fwd = NULL;
    int count=0;
    while(curr != NULL && count < k)
    {
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
        count++;
    }
    
    //Step 2 recursive call ko attach karna h head->next mie 
    if(fwd != NULL)
    {
        head->next = kReverse(fwd, k);    
    }
    //step3 return the prev as the head is there only
    return prev;
}
```