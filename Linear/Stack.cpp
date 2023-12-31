#include<bits/stdc++.h>
using namespace std;
int top=-1;
bool isFull(int n)
{
    if(top==n-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isEmpty(int n)
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int a[],int n,int data)
{
    if(isFull(n))
    {
        cout<<"Stack is already full\n";
    }
    else
    {
        top++;
        a[top]=data;
        cout<<"Value "<<data<<" is added into the stack\n";
    }
}
void pop(int a[],int n)
{
    if(isEmpty(n))
    {
        cout<<"Stack is already empty\n";
    }
    else
    {
        int val=a[top];
        top--;
        cout<<"Value is "<<val<<" is pop into the stack\n";
    }
}
void peek(int a[],int n)
{
    if(isEmpty(n))
    {
        cout<<"Stack is already empty\n";
    }
    else
    {
        int val=a[top];
        top--;
        cout<<"Value "<<val<<" is pop on the stack\n";
    }
}
void traverse(int a[],int n)
{
    int i;
    if(isEmpty(n))
    {
        cout<<"Stack is already empty\n";
    }
    else
    {
        cout<<"Stack element are\n";
        for(i=0;i<=top;i++)
        {
            cout<<a[i]<<endl;
        }
    }
}
int main()
{
    int n,i,choice,value;
    bool c1=true;
    cout<<"Enter size of the stack\n";
    cin>>n;
    int a[n];
    while(c1)
    {
       cout<<"Enter 1 for push\n";
       cout<<"Enter 2 for pop\n";
       cout<<"Enter 3 for peek\n";
       cout<<"Enter 4 for traverse\n";
       cout<<"Enter 5 for exit\n";
       cin>>choice;
       switch(choice)
       {
       case 1:
        {
            cout<<"Enter your element\n";
            cin>>value;
            push(a,n,value);
            break;
        }
       case 2:
        {
            pop(a,n);
            break;
        }
       case 3:
        {
            peek(a,n);
            break;
        }
       case 4:
        {
            traverse(a,n);
            break;
        }
       case 5:
        {
            c1=false;
            break;
        }
       }

    }
    return 0;
}
