#include<bits/stdc++.h>
using namespace std;
int partitionarray(int a[],int lb,int ub)
{
    int pivot,first,last,temp;
    pivot=a[lb];
    first=lb;
    last=ub;
    while(first<last)
    {
    while(a[first]<=pivot)
    {
        first++;
    }
    while(a[last]>pivot)
    {
        last--;
    }
    if(first<last)
    {
        temp=a[first];
        a[first]=a[last];
        a[last]=temp;
    }

    }
    temp=a[lb];
    a[lb]=a[last];
    a[last]=temp;
    return last;

}
void Quicksort(int a[],int lb,int ub)
{
    int i;
    if(lb<ub)
    {
        int loc=partitionarray(a,lb,ub);
        Quicksort(a,lb,loc-1);
        Quicksort(a,loc+1,ub);
    }

}
int main()
{
    int i,n,first,last;
    cout<<"Enter array size\n";
    cin>>n;
    int a[n];
    cout<<"Enter array element\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Quicksort(a,0,n-1);
    cout<<"After sorted array is\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
