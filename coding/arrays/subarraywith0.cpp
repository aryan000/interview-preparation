//https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
#include<iostream>
#include<set>
using namespace std;
bool subarray_exsists(int* arr, int n)
{
    set<int> s;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum==0||s.find(sum)!= s.end())
        {
            return true;
        }
        s.insert(sum);
    }
    return false;
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
    bool ans= subarray_exsists(arr,n);
    if(ans==0)
    {
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}