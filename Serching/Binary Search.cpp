#include<bits/stdc++.h>
using namespace std;
int searchitem(vector<int>v,int length,int data)
{
    sort(v.begin(),v.end());
    int left,right,mid;
    left=0;
    right=length-1;
    while(left<right)
    {
        mid=(left+right)/2;
        if(v[mid]==data)
        {
            return v[mid];
            break;
        }
        else if(data<v[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;

}
int main()
{
    int n,i,item,val;
    cout<<"Enter vector size\n";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter element of the vector\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter your search item\n";
    cin>>item;
    val=searchitem(a,n,item);
    if(val==-1)
    {
        cout<<"Item not found\n";
    }
    else
    {
        cout<<"Your item "<<item<<" is present in vector\n";
    }
    return 0;
}
