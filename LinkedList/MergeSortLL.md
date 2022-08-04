# Merge Sort in LL
- Find the middle element of the LL
- Then form 2 LL left and right and store the left starting from head and right starting from mid-> next
- Then sort the left and right part recursively 
- Then merge 2 sorted LL

## Approach 
```
    T.C. = O(nLogn) S.C. = O(1)
    //Merge 2 Sorted LL
    Node* merge(Node* left, Node* right)
    {
        if(left == NULL)
            return right;
        if(right == NULL)
            return left;
        Node* ans = new Node(-1);
        Node* temp = ans;
        
        while(left != NULL && right != NULL)
        {
            if(left -> data < right -> data)
            {
                temp -> next = left;
                temp = left;
                left = left -> next;
            }
            else
            {
                temp-> next = right;
                temp = right;
                right = right -> next;
            }
        }
        
        while(left != NULL)
        {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        while(right != NULL)
        {
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
        
        ans = ans -> next;
        return ans;
    }

    //Tortortise method to find the Middle Element of the LL
    Node* getMid(Node* head)
    {
        Node* fast = head -> next;
        Node* slow = head;

        while(fast != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }

    Node *sortLL(Node *head)
    {
        //base case
        //Empty LL or only one element in the LL
        if(head == NULL || head -> next == NULL)
        {
            return head;
        }

        // Find the middle element 
        Node* mid = getMid(head);

        //Divide in two LL
        Node* left = head;
        Node* right = mid -> next;
        mid -> next = NULL;

        //Recursively sort the LL
        left = sortLL(left);
        right = sortLL(right);

        //Merge 2 sorted LL
        Node* result = merge(left, right);
        return result;
    } 
```