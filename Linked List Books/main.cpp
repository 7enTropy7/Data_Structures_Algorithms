#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct book
{
    string title;
    book *next;
};

book *add_node(book *in_root)
{
book *next_ptr=NULL;
book *prev_ptr=NULL;
   if(in_root==NULL)
   {
      if((in_root=new book)!=NULL)
      {
          next_ptr=in_root;
          cout<<"Title: ";
          cin>>next_ptr->title;

          next_ptr->next=NULL;
      }
      else
      {
          cout<<"ERROR: Unable to allocate memory!"<<endl;
          return NULL;
      }
      return next_ptr;
   }
   else
   {
       next_ptr=in_root;
       while(next_ptr->next!=NULL)
       {
           next_ptr=next_ptr->next;
       }
       prev_ptr=next_ptr;
       if((next_ptr=new book)!=NULL)
       {
          prev_ptr->next=next_ptr;
          cout<<"Title: ";
          cin>>next_ptr->title;

          next_ptr->next=NULL;
       }
       else
       {
           cout<<"ERROR: Unable to allocate memory!"<<endl;
       }
       return in_root;
   }
}
void print_list(book *in_root)
{
    book *next_ptr;
    next_ptr=in_root;
    if(next_ptr==NULL)
    {
        cout<<"EMPTY LIST: No nodes to print..."<<endl;
    }
    else
    {
        while(next_ptr!=NULL)
        {
            cout<<next_ptr->title<<endl;
            next_ptr=next_ptr->next;
        }
    }
}


int main()
{
    book *head=NULL;
    book *next_ptr=NULL;
    char choice;
    do
    {
        system("cls");
        cout<<"A)dd Node"<<endl;
        cout<<"P)rint List"<<endl;
        cout<<"Q)uit Program"<<endl;
        cin>>choice;

        choice=toupper(choice);

        switch(choice)
        {
        case 'A':
            head=add_node(head);
            break;
        case 'P':
            print_list(head);
            break;
        case 'Q':
            break;
        default:
            cout<<"Invalid Choice!!!"<<endl;
        }
    }
    while(choice!='Q');
    return 0;
}





