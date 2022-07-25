//Singly Linked List
//Head is the start node of the linked list 
//Tail is the last of the node 
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node * next;

    //constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node()
    {
        int value = this -> data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Momory is free for node with data "<< value <<endl;
    }
};

//Inset at the head
void InsertAtHead(Node* &head, Node* &tail, int data)
{
    if(head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }

    else
    {
        Node * temp = new Node(data);
        temp -> next = head;
        head = temp;
    }

}

//Insert at the end 
void InsertAtTail(Node* &head, Node * &tail, int data)
{
    if(tail == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(data);
        tail -> next = temp;
        tail = temp;
    }
}

//Insert at the middle
void InsertAtPosition(Node* &head, Node* &tail, int pos, int data)
{
    //Insert at the start
    if(pos == 1)
    {
        InsertAtHead(head,tail, data);
        return;
    }

    Node* temp = head;
    int c = 1;
    while (c < pos-1)
    {
        temp = temp -> next;
        c++;
    }

    //Insert at the end
    if(temp -> next = NULL)
    {
        InsertAtTail(head, tail, data);
        return;
    }
    //creating a node for data
    Node * nodeToInsert = new Node(data);
    nodeToInsert  -> next = temp -> next;
    temp -> next = nodeToInsert;

}
void print(Node* &head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp -> next;   
    }
    cout << endl;
}

//delete the value at the position 
void deleteNode(int pos, Node * &head)
{
    //deleting start node
  if(pos == 1 )
  {
    Node* temp = head;
    head = head->next;
    temp -> next = NULL;
    delete temp;
  }  

//deleting any node or the last node
  else
  {
    Node* curr = head;
    Node * prev = NULL;

    int cnt = 1;
    while(cnt < pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}

int main()
{
    //  Node * node1 = new Node(10);    Dyanamically creating the object for Node class
    Node * head = NULL;
    Node * tail = NULL;
    print(head);

    InsertAtTail(head, tail, 11);
    print(head);

    InsertAtTail(head, tail, 12);
    print(head);

    InsertAtPosition(head, tail, 3, 22);
    print(head);

    deleteNode(3,head);
    print(head);
    cout<<"Head = "<< head->data << endl;
    cout<<"Tail = "<< tail->data << endl;

 return 0;   
}