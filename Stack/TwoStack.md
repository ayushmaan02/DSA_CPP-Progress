# Two Stack 
1. Write a class to form two stack using a single array 
2. Perform push1, push2, pop1 and pop2 operation and create a constructor

- Create a constructor with an array, size, and two top's for both the stack
- The top1 for stack1 will fill form left to right and top2 for stack2 will fill from right to left (i.e. top1 = -1 and top2 = size)
- If top2 - top1 >1 then for push1 top1++ and add the element to the array
- If top2 - top1 >1 then for push2 top2-- and add the element to the array
- If top1 >=0 for pop1 top1--  and display the poped element
- If top2 < size for pop2 top2++ and display the poped element

```
    For all operations T.C.= O(1) S.C.= O(1)
class TwoStack {
    int *arr;
    int top1, top2;
    int size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this->size = s;
        top1 =-1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2 -top1 >1)
        {
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 >1)
        {
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >=0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return-1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 <size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
        
    }
};
```