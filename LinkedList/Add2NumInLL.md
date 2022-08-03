# Add two numbers represented by Linked List
- Revrse both the list
- Add the values of thr list
- Reverse the ans list
> GFG Practice

## Approach
```
    T.C. = O(N+M) S.C. = O(Max(M,N)) 
 private:
    Node* reverseLL(Node* head)
    {
        Node* curr = head;
        Node* prev = NULL;
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
    void insertAtTail(struct Node* &head, struct Node* &tail, int val)
    {
        Node* temp = new Node(val);
        //List is empty
        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        //List is non-empty
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }

     Node* add(struct Node* first, struct Node* second)
    {
        int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        while(first != NULL || second != NULL || carry !=0)
        {
            int val1 = 0;
            int val2 = 0;
            
            if(first != NULL)
                val1 = first -> data;
            if(second != NULL)
                val2 = second -> data;

            int sum = carry + val1 + val2;
            int digit = sum % 10;
            
            //Create a node and add in answer linked List
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            
            if(first != NULL)
                first = first -> next;
            if(second != NULL)
                second = second -> next;
        }
            return ansHead;
    }
 public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // Step 1 reverse the LL
        first = reverseLL(first);
        second = reverseLL(second);
        
        //Step 2 Add two LL
        Node* ans = add(first, second);
        
        //Step 3 Reverse the ans LL
        ans = reverseLL(ans);
        
        return ans;
    }
```