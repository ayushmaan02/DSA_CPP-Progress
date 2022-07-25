#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Traversing the linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Length of the linked list
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)       //When the linked list is empty 
    {
        /* code */
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)               //When the linked list is empty 
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }

    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        InsertAtHead(head,tail, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    Node *nodeToAdd = new Node(data);
    nodeToAdd->next = temp->next;
    temp->next->prev = nodeToAdd;
    temp->next = nodeToAdd;
    nodeToAdd->prev = temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    cout << "Length of the DLL is " << getLength(head) << endl;

    InsertAtHead(head,tail, 200);
    print(head);

    insertAtTail(head, tail, 300);
    print(head);


    InsertAtPosition(head, tail, 1, 100);
    print(head);

    InsertAtPosition(head, tail, 4, 400);
    print(head);

    InsertAtPosition(head, tail, 5, 500);
    print(head);

    return 0;
}