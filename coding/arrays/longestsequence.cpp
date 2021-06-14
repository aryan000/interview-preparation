//https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
#include<iostream>
#include<set>
#include<climits>
using namespace std;

int longest_subsequence(int* arr, int n)
{
    set<int> s;
    int ans = 0;
 
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i] - 1) == s.end())
        {
            int j = arr[i];
            while (s.find(j) != s.end())
            {
                j++;
            }
            ans = max(ans, j - arr[i]);
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

    int ans= longest_subsequence(arr,n);
    cout<<ans;
}