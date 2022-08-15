#include<iostream>
#include<queue>
using namespace std;
class Queue
{
    public:
        int *arr;
        int size = 0;
        int front;
        int rear;

        Queue(int s)
        {
            this->size = s;
            arr = new int[s];
            front = 0;
            rear = 0;
        }

        //Insert the element to queue(ENQUEUE)
        void enqueue(int data)
        {
            if(rear == size)
                cout<<"Queue is full!!";
            else
            {
                arr[rear] = data;
                rear++;
            }
        }
        //Delete from the queue (DEQUEUE)
        void dequeue()
        {
            //if the queue is empty
            if(front == rear)
                cout<<"Queue is empty!!";
            else
            {
                arr[front] = -1;
                front++;
                if(front == rear)
                {
                    front = 0;
                    rear = 0; 
                }
            }
        }
        //front of the queue
        void Front()
        {
            if(front == rear)
                cout<<"Empty queue!!";
            else
            {
                cout<<"Front -> "<<arr[front]<<endl;
            }
        }
        //empty check
        bool isEmpty()
        {
            if(front == rear)
                return true;
            else
                return false;
        }
        //Display the queue
        void display()
        {
            if(front == rear)
                cout<<"Queue is empty";
            else 
            {
                for(int i = front; i< rear; i++)
                {
                    cout<<arr[i]<<" ";;
                }
                cout<<endl;
            }
        }
};

int main()
{
    Queue q(4);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout<<"Original queue ->"<<endl;
    q.display();

    q.dequeue();

    cout<<"After deletion of 1 element queue ->"<<endl;
    q.display();










    /*
    QUEUE USING STL
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"The size of the queue = "<<q.size()<<endl;
    q.pop();
      cout<<"The size of the queue = "<<q.size()<<endl;
    */
    return 0;
}