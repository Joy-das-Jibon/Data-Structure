#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,temp;
    cout<<"Enter array size\n";
    cin>>n;
    int a[n];
    cout<<"Enter array element\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"After sorting array is\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
