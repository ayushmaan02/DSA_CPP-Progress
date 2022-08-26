# Dobuly Ended Queue (Deque)
`
Deque or Double Ended Queue is a type of queue in which insertion and removal of elements can either be performed from the front or the rear. Thus, it does not follow FIFO rule (First In First Out).
`
>Code Studio


```
class Deque
{
    int *arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //Check weather queue is full or not
        if(isFull())
        {
            return false;
        }
        //First element going to insert
        else if(isEmpty())
        {
            front = rear =0;
        }
        //To maintain the cyclic nature
        else if(front ==0 && rear != size-1)
        {
            front = size-1;
        }
        //Normal flow
        else
        {
            front --;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        //Full queue
        if(isFull())
        {
            return false;
        }
        //First element to push
        else if(isEmpty())
        {
            front = rear =0;
        }
        //cyclic nature maintain
        else if(rear == size-1 && front !=0)
        {
            rear = 0;
        }
        //normal flow
        else
        {
            rear ++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        //check the queue is empty or not
        if(isEmpty())
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        //single element to delete
        if(front == rear)
        {
            front = rear =-1;
        }
        // To maintain cyclic nature
        else if(front == size-1)
        {
            front = 0;
        }
        //normal flow
        else
        {
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        //check the queue is empty or not
        if(isEmpty())
        {
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        //single element to delete
        if(front == rear)
        {
            front = rear =-1;
        }
        // To maintain cyclic nature
        else if(rear == 0)
        {
            rear = size-1;
        }
        //normal flow
        else
        {
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
       if((front == 0 && rear == size-1) || (front !=0 && rear == (front -1) % (size-1) ) )
           return true;
        else
            return false;
    }
};
```