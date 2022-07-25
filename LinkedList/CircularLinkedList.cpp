#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "The memory free = " << val << endl;
    }
};

void insertNode(Node* &tail, int data, int element)
{
    if(tail == NULL)
    {
      Node* newNode = new Node(data);
      tail = newNode;
      newNode -> next = newNode;  
    }

    else
    {
        //non-empty list
        Node* curr = tail;
        while(curr->data !=element)
        {
            curr = curr->next;
        }
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* &tail)
{
    Node* temp = tail;
    do
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    } while (tail != temp);
    cout<<endl;
    
}

int main()
{
    Node* tail = NULL;
    insertNode(tail,1,3);
    print(tail);
    cout<<"Tail = "<<tail->data<<endl;

    insertNode(tail, 2, 1);
    print(tail);
    cout<<"Tail = "<<tail->data<<endl;
    return 0;
}