//https://leetcode.com/problems/find-the-duplicate-number/
#include<iostream>
#include<map>
using namespace std;

int duplicate(int* arr, int n)
{
    map<int, int> m1;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        m1[arr[i]]++;
        if (m1[arr[i]] > 1)
        {
            ans=arr[i];
            break;
           
        }
    }
    return ans;  
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

    int ans= duplicate(arr,n);
    cout<<ans;
}