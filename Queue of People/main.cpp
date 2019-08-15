#include <iostream>

using namespace std;

struct person
{
    char name[30];
    person *link;
}*front,*rear;

class que
{
public:
    que()
    {
        front=rear=NULL;
    }
    void push()
    {
        person *temp;
        temp=new person;
        cin>>temp->name;
        temp->link=NULL;
    if(rear==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->link=temp;
        rear=temp;
    }
    }
};

void display()
{
    cout<<endl;
    cout<<"Here's your Queue of people..."<<endl;
     while(front!=NULL)
    {
    cout<<front->name<<"->";
    front=front->link;
    }
    cout<<"!!!"<<endl;
}

int main()
{
    que q;
    char ch='y';
    do
    {
        cout<<"Enter name of the person standing in queue."<<endl;
        q.push();
        cout<<"Do you want to enter more people? (Y/N)"<<endl;
        cin>>ch;
    }while(ch=='y' || ch=='Y');
   display();
    return 0;
}
