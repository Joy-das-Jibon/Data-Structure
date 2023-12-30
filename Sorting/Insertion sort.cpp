#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp,j;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"Your array is=\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

