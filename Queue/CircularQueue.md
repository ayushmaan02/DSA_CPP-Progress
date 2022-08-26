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
        int size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Check weather queue is full or not
        if((Front == 0 && rear == 0) || (rear == (Front-1)%(size-1) ) )
        {
            cout<<"Queue is Full";
            return false;
        }
        else if(Front == -1)    //first element is come for enqueue
        {
            Front = rear =0;
            arr[rear] = value;
        }
        //To convert it to circular queue
        else if(rear == size-1 && Front!=0)
        {
            rear =0;
            arr[rear] = value;
        }
        //Normal flow
        else
        {
            rear++;
            arr[rear] =value;
        }
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        //Check weather the queue is empty or not
        if(Front == -1)
        {
            cout<<"Queue is Empty";
            return -1;
        }
        int ans = arr[Front];
        arr[Front] = -1;
        //Check weather single element is present
        else if(Front == rear)
        {
            Front =rear =-1;
        }
        //To make the deletion in circular
        else if(Front == size-1)
        {
            Front=0;
        }
        //Normal flow
        else
        {
            Front++;
        }
        return ans;
    }
};
```