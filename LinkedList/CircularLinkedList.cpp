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
        //Assuming that any value is present in the Circular linked list 
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
    if(tail == NULL)
        cout<<"List is empty"<<endl;
    Node* temp = tail;
    do
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    } while (tail != temp);
    cout<<endl;
    
}

void deleteNode(Node* &tail, int element)
{
    if(tail == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    else
    {
        //Assumint that any value is present in the Circular Linked List
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        
        //1 Node linked list
        if(curr == prev)
            tail =NULL;

        //>2Nodes in a Linked List
        else if(curr != prev)
            tail = prev;

        if(tail == curr)
            tail = prev;
        curr->next = NULL;
        delete curr;
    }
}

bool isCircular(Node* head)
{
    if(head == NULL)
        return true;
    Node* temp = head->next;

    while(temp!=NULL && temp!=head)
    {
        temp = temp->next;
    }

    if(temp == head)
        return true;
    return false;
}

int main()
{
    Node* tail = NULL;
    insertNode(tail,1,3);
    print(tail);
    // cout<<"Tail = "<<tail->data<<endl;

    insertNode(tail, 2, 1);
    print(tail);

    insertNode(tail, 3, 2);
    print(tail);
    
    insertNode(tail, 4, 3);
    print(tail);

    if(isCircular(tail))
    {
        cout<<"Circular"<<endl;
    }
    else
    {
        cout<<"Not Circular"<<endl;
    }
    // deleteNode(tail,1);
    // print(tail);
    return 0;
}