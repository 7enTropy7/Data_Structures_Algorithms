#include <iostream>

using namespace std;

struct student
{
    int roll;
    int marks;
    student *next;
};
class stack
{
    student *top;
public:
    stack()
    {
        top=NULL;
    }

    void push(int r,int m)
    {
        student *temp;
        temp=new student;
        temp->roll=r;
        temp->marks=m;
        temp->next=NULL;
        if(top==NULL)
        {
            top=temp;
        }
        else
        {
            temp->next=top;
            top=temp;
        }
    }
    void pop()
    {
        if(top==NULL)
        {
            cout<<"Underflow!"<<endl;
        }
        else
        {
            student *p=top;
            top=top->next;
            delete p;
        }
    }
void display()
{
    while(top!=NULL)
    {
        cout<<top->roll<<"__"<<top->marks<<endl;
        top=top->next;
    }
}
};
int main()
{
    stack s;
    int r,m;
    char ch='y';
    do
    {
        cout<<"Roll no.: ";
        cin>>r;
        cout<<"Marks: ";
        cin>>m;
        s.push(r,m);
        cout<<"Want to insert more?"<<endl;
        cin>>ch;
    }
    while(ch=='y');
    s.display();
    s.pop();
    return 0;
}


