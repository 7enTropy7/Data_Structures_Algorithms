#include <iostream>

using namespace std;

int arr[100];
int top=-1;
void push(int item)
{
    if(top==100)
    {
        cout<<"Overflow!!!"<<endl;
    }
    else
    {
        top++;
        arr[top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"Underflow!!!"<<endl;
    }
    else
    {
        top--;
    }
}
void display()
{
    cout<<arr[top]<<"<--"<<endl;
    for(int i=top-1;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int val;
    char ch='y';
    while(ch=='y')
    {
        cout<<"Enter a value..."<<endl;
        cin>>val;
        push(val);
        cout<<"Enter more elements? (y/n)"<<endl;
        cin>>ch;
    }
    display();
    pop();
    return 0;
}
