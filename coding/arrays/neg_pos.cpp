#include<iostream>
using namespace std;

void negative_positive(int *arr, int n)
{
   int k=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]<0)
       {
        if(i!=k)
        {
            int temp=arr[i];
            arr[i]=arr[k];
            arr[k]=temp;
        }
        k++;
       }
   }
   for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
int main()
{
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
   negative_positive(arr,n);
}