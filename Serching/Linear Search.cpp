#include<bits/stdc++.h>
using namespace std;
int searchitem(vector<int>a,int n,int item)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int i,n,item;
    cout<<"Enter vector size\n";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter element of the vector\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter which item you are went to search\n";
    cin>>item;
    int index=searchitem(a,n,item);
    if(index!=-1)
    {
      cout<<"Your data "<<item<<" is found at index number "<<index<<endl;
    }
    else
    {
        cout<<"Item not found\n";
    }
    return 0;
}
