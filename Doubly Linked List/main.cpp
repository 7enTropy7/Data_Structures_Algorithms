#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head;

struct Node *createNewNode(int x)
{
    struct Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void insertAtHead(int x)
{
    struct Node *temp = createNewNode(x);
    if(head == NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void print()
{
    struct Node *temp = head;
    cout<<"Forward: ";
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reversePrint()
{
    struct Node *temp = head;
    if(temp == NULL)
    {
        return;
    }
    cout<<"Reversed: ";
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}


int main()
{
    head = NULL;
    insertAtHead(2);print();reversePrint();
    insertAtHead(7);print();reversePrint();
    insertAtHead(1);print();reversePrint();
    insertAtHead(9);print();reversePrint();
    return 0;
}
