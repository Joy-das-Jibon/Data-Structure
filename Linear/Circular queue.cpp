#include<bits/stdc++.h>
using namespace std;
int front=-1,rear=-1;
void enqueue(int a[],int n,int val)
{
    if((rear+1)%n==front)
    {
        cout<<"Queue is already full\n";
    }
    else if(front==-1&&rear==-1)
    {
        front++;
        rear++;
        a[rear]=val;
        cout<<"Value "<<val<<" is added on queue\n";
    }
    else
    {
        rear=(rear+1)%n;
        a[rear]=val;
        cout<<"Value "<<val<<" is added on queue\n";
    }

}
void dequeue(int a[],int n)
{
    int value;
    if(front==-1&&rear==-1)
    {
        cout<<"Queue is already empty\n";
    }
    else if(front==rear)
    {
        a[front];
        cout<<"Value "<<value<<" is dequeue into the queue\n";
        front=rear=-1;
    }
    else
    {
        value=a[front];
        front=(front+1)%n;
        cout<<"Value "<<value<<" is dequeue into the queue"<<endl;
    }
}
void display(int a[],int n)
{
    int i;
    i=front;
    if(front==-1&&rear==-1)
    {
        cout<<"Queue is already empty\n";
    }
    else
    {
        cout<<"Queue element are\n";
        while(i!=rear)
        {
            cout<<a[i]<<endl;
            i=(i+1)%n;
        }
        cout<<a[rear]<<endl;
    }
}
int main()
{
    int n,choice;
    cout<<"Enter size of the queue\n";
    cin>>n;
    int a[n];
    bool c1=true;
    while(c1)
    {
        cout<<"Enter 1 for enqueue\n";
        cout<<"Enter 2 for dequeue\n";
        cout<<"Enter 3 for display\n";
        cout<<"Enter 4 for exit\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
                cout<<"Enter value for queue\n";
                int value;
                cin>>value;
                enqueue(a,n,value);
                break;
            }
        case 2:
            {
                dequeue(a,n);
                break;
            }
        case 3:
            {
                display(a,n);
                break;
            }
        case 4:
            {
                c1=false;
                break;
            }
        default:
            {
                cout<<"Unknown number\n";
                break;
            }

        }
    }
    return 0;
}
