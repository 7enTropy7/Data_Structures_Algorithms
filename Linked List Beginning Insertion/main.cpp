#include <iostream>

using namespace std;

struct node
{
    int info;
    node *next;
}*start,*newptr,*ptr,*save;

node *create(int n)
{
     ptr=new node;
     ptr->info=n;
     ptr->next=NULL;
     return ptr;
}
void insertbeg(node *np)
{
    if(start==NULL)
    {
        start=np;
    }
    else
    {
        save=start;
        start=np;
        np->next=save;
    }
}

void display(node *np)
{
    while(np!=NULL)
    {
        cout<<np->info<<"->";
        np=np->next;
    }
    cout<<"!!!"<<endl;
}


int main()
{
    start=NULL;
    int inf; char ch='y';
    while(ch=='y' || ch=='Y')
    {
        cout<<"Enter Information for new node..."<<endl;
        cin>>inf;
        cout<<"Creating New Node."<<endl;
        newptr=create(inf);
        if(newptr!=NULL)
        {
            cout<<"New Node created successfully! ;)"<<endl;
        }
        else
        {
            cout<<"Cannot create new node:("<<endl;
        }
        cout<<"Now Insertion of Node has begun..."<<endl;
        insertbeg(newptr);
        cout<<"Now the list is..."<<endl;
        display(start);
        cout<<"Press Y to enter more nodes."<<endl;
        cin>>ch;
    }
    return 0;
}








