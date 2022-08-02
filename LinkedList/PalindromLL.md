# Check the Linked List is Palindrom or not

**Approach 1**
- Create an array and copy the linked list element to it 
- Then write the logic to check palindrom or not of array

**Approach 2**
- Find the middle of the LL
- Then reverse the list which id present after the middle
- Then compare both the halves of the list (before middle and after mmiddle)
- (**OPTIONAL**) Then change the input LL to its original one
> GFG Practice

## Approach 1
```
    T.C. = O(N), S.C. = O(N)
    bool checkPalindrome(vector<int> arr)
    {
        int size = arr.size();
        int start = 0;
        int end = size-1;

        while(start <= end)
        {
            if(arr[start] != arr[end])
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }
        } 
        return true;
    }

    bool isPalindrome(Node* head)
    {
        //create an array
        vector<int> arr;
        //copy the data of the ll to the array
        Node* temp = head;
        while(temp != NULL)
        {
            arr.push_back(temp -> data);
            temp = temp -> next;
        }
        return checkPalindrom(arr);
    }
```

## Approach 2
```
    T.C. O(N), S.C. O(1)
    //Middle of the linked list
    Node* geMiddle(Node* head)
    {
        Node* slow = head;
        Node* fast = head -> next;
        while(fast != NULL && fast ->next != NULL )
        {
                fast = fast ->next -> next;
                slow = slow -> next;
        }
        return slow;
    }

    Node* reverse(Node* head)
    {
        Node* fwd = NULL;
        Node* curr = head;
        Node* prev = NULL;
        while(curr != NULL)
        {
            fwd = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = fwd;
        } 
        return prev;
    }

    bool isPalindrome(Node* head)
    {
        //Check for the single node
        if(head -> next == NULL)
            return true;
        
        //Step 1 Find middle of the LL
        Node* middle = getMiddle(head);

        //Step 2 reverse the LL after the Middle
        Node* temp = middle -> next;
        middle -> next = reverse(temp);

        //Step 3 Compare the two halves
        Node* head1 = head;
        Node* head2 = middle -> next;
        while(head2 != NULL)
        {
            if(head1 -> data != head2 -> data)
            {
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        //Step 4 Repeate the step 2 (OPTIONAL)
        temp = middle -> next;
        middle -> next = reverse(temp);
        return true;
    }
```