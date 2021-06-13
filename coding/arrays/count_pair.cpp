//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
#include<iostream>
#include<map>
using namespace std;

int count_pair(int* arr, int n, int k)
{
     map<int, int> m;
 
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
 
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        count = count + m[k - arr[i]];
    if (k - arr[i] == arr[i])
            count--;
    }
 
    
    return count / 2;
}
int main()
{
    int k,n;
    cin>>k>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans= count_pair(arr,n,k);
    cout<<ans;
}