# Check the Linked List is Palindrom or not

**Approach 1**
- Create an array and copy the linked list element to it 
- Then write the logic to check palindrom or not of array
> GFG Practice

## Approach 1
```
    T.C. = O(N), S.C. = O(N)
    bool checkPalindrome(vector<int> arr)
    {
        int size = arr.size();
        int start = 0;
        int end = size-1;

        while(start >= end)
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