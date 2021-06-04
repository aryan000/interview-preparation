#include<iostream>
#include<algorithm>
using namespace std;

int kth_smallest(int *arr, int n, int k)
{
    sort(arr,arr+n);
    return arr[k-1];

}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int a= kth_smallest(arr,n,k);
    cout<<a<<endl;
}