// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
#include<iostream>
using namespace std;

int subarraysum(int *arr, int n)
{
   int max_so_far = arr[0];
   int curr_max = arr[0];
 
   for (int i = 1; i < n; i++)
   {
        curr_max = max(arr[i], curr_max+arr[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
    
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

    int ans= subarraysum(arr,n);
    cout<<ans;
}