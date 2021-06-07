//https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
#include<iostream>
using namespace std;

int count_inversion(int* arr, int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    return count;
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
    int ans= count_inversion(arr,n);
    cout<<ans;
}