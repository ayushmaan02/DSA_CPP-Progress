# Circular Queue
`A circular queue is the extended version of a regular queue where the last element is connected to the first element. Thus forming a circle-like structure.`

>Code Studio 
```
T.C. O()
class CircularQueue{
    int *arr;
    int size;
    int Front;
    int rear;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        int size = 100001;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((Front == 0 && rear == 0) || (rear == (Front-1)%(size-1) ) )
        {
            return false;
        }
        else if(Front == -1)    //first element is come for enqueue
        {
            Front = rear =0;
            arr[rear] = value;
        }
        else if(rear == size-1 && Front!=0)
        {
            rear =0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] =value;
        }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
    }
};
```