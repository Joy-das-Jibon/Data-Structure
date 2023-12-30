#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,temp,n,min_index;
    cout<<"Enter array size\n";
    cin>>n;
    int a[n];
    cout<<"Enter array element\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }
        }
        temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
    }
    cout<<"After sorted array is\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
