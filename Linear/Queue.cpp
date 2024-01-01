#include<bits/stdc++.h>
using namespace std;
int front=0,rear=-1;
bool isFull(int n)
{
    if(rear==n-1)
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
    if(front==-1||front==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enqueue(int a[],int n)
{
    int item;
    if(isFull(n))
    {
        cout<<"Queue is already full\n";
    }
    else
    {
        cout<<"Enter element of the queue\n";
        cin>>item;
         rear++;
        a[rear]=item;
        cout<<"Your value "<<item<<" is added on queue\n";
    }
}
void dequeue(int a[],int n)
{
    int val;
    if(isEmpty(n))
    {
        cout<<"Queue is already empty\n";
    }
    else
    {
        val=a[front];
        front++;
        cout<<"Value "<<val<<" is pop into the queue\n";
    }
}
void traverse(int a[],int n)
{
    int i;
    if(isEmpty(n))
    {
        cout<<"Queue is already empty\n";
    }
    else
    {
        cout<<"Queue element are\n";
        for(i=front;i<=rear;i++)
        {
            cout<<a[i]<<endl;
        }
    }
}
int main()
{
    int choice,n;
    cout<<"Enter size of the queue\n";
    cin>>n;
    int a[n];
    bool c1=true;
    while(c1)
    {
        cout<<"Enter 1 for enqueue\n";
        cout<<"Enter 2 for dequeue\n";
        cout<<"Enter 3 for traverse\n";
        cout<<"Enter 4 for exit\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
                enqueue(a,n);
                break;
            }
        case 2:
            {
                dequeue(a,n);
                break;
            }
        case 3:
            {
                traverse(a,n);
                break;
            }
        case 4:
            {
                c1=false;
                break;
            }
        default:
            {
                cout<<"Please enter given option\n";
                break;
            }
        }
    }
    return 0;
}
