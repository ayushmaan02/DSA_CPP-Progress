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
};

//Inset at the head
void InsertAtHead(Node* &head, int data)
{
    Node * temp = new Node(data);
    temp -> next = head;
    head = temp;
}

//Insert at the end 
void InsertAtTail(Node * &tail, int data)
{
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

//Insert at the middle
void InsertAtPosition(Node* &head, Node* &tail, int pos, int data)
{
    //Insert at the start
    if(pos == 1)
    {
        InsertAtHead(head, data);
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
        InsertAtTail(tail, data);
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

int main()
{
    Node * node1 = new Node(10);        //Dyanamically creating the object for Node class
    Node * head = node1;
    Node * tail = node1;
    InsertAtTail(tail, 12);
    InsertAtTail(tail, 13);
    InsertAtPosition(head, tail, 2, 11);
    print(head);
 return 0;   
}