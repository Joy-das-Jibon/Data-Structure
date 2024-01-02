#include <bits/stdc++.h>
using namespace std;
void mergearray(int arr[], int p, int q, int r)
{
  int n1,n2,i,j,k;
  n1=q - p + 1;
  n2 = r - q;
  int L[n1], M[n2];

  for (i=0;i<n1;i++)
   {
    L[i] = arr[p + i];
   }
  for (j = 0; j < n2; j++)
  {
    M[j] = arr[q + 1 + j];
  }
  i = 0;
  j = 0;
  k = p;
  while (i < n1 && j < n2)
   {
    if (L[i] <= M[j])
    {
      arr[k] = L[i];
      i++;
    }
    else
    {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  while (i < n1)
  {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2)
  {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergesort(int arr[], int l, int r)
{
  if (l < r)
  {
    int m = l + (r - l) / 2;
    mergesort(arr, l, m);
    mergesort(arr, m + 1, r);
    mergearray(arr, l, m, r);
  }
}


void printarray(int arr[],int n)
{
    int i;
  for (i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n,i;
    cout<<"Enter size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter element of the array\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  mergesort(arr,0,n-1);

  cout << "Sorted array is: \n";
  printarray(arr,n);
  return 0;
}
