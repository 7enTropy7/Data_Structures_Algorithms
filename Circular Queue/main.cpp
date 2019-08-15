#include <iostream>
#include <stdlib.h>
using namespace std;
class q
{
    int a[5];
    int front,rear;
public:
    q()
    {
        front=rear=-1;
    }
    void enq(int v)
    {
        if(front==0 && rear==5-1)
        {
            cout<<"Circular Queue is Full!"<<endl;
        }
        else if(rear+1==front)
        {
            cout<<"Circular Queue is Full!"<<endl;
        }
        else
        {
            if(rear==5-1)
            {
                rear=0;
            }
            else
            {
                rear++;
            }
            a[rear]=v;
        }
        if(front==-1)
        {
            front=0;
        }
    }
    int dq()
    {
        int k;
        if(front==-1)
        {
            cout<<"Circular Queue is Empty!"<<endl;
        }
        else
        {
            k=a[front];
            if(front==rear)
            {
                front=rear=-1;
            }
            else if(front==5-1)
            {
                front=0;
            }
            else
            {
                front++;
            }
        }
        return k;
    }
    void display()
    {
        int i;
        if(front==-1)
        {
            cout<<"Circular Queue is Empty!"<<endl;
        }
        else
        {
            if(rear<front)
            {
                for(i=front;i<=5-1;i++)
                {
                    cout<<a[i]<<"  ";
                }
                for(i=0;i<=rear;i++)
                {
                    cout<<a[i]<<"  ";
                }
            }
            else
            {
                for(i=front;i<=rear;i++)
                {
                    cout<<a[i]<<"  ";
                    cout<<endl;
                }
            }
        }
    }
};
int main()
{
    q c1;
    int choice=1;
    int val;
    do
    {
        system("clear");
        c1.display();
        cout<<"Enter a choice..."<<endl;
        cout<<"1. Insertion"<<endl;
        cout<<"2. Deletion"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        if(choice==1)
        {
            cout<<"Enter Element to be Inserted: ";
            cin>>val;
            c1.enq(val);
        }
        else if(choice==2)
        {
            val=c1.dq();
            cout<<endl;
            cout<<"Deleted Element: "<<val<<endl;
        }
    }while(choice=1 || choice==2);
    return 0;
}
