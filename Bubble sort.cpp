#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],temp,j,index;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[index])
            {
                index=j;
            }
        }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;

    }
      cout<<"After sort\n";
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
    return 0;
}
