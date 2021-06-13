#include<iostream>
#include<set>
#include <bits/stdc++.h>
using namespace std;

//link=https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/14

int get_union(int* arr1, int* arr2, int m, int n)
{
     set<int> s;
     set<int> :: iterator itr;

     for(int i=0;i<m;i++)
     {
         s.insert(arr1[i]);
     }

     for(int j=0;j<n;j++)
     {
         s.insert(arr2[j]);
     }
     
     return s.size();


}
int main()
{
    int m,n;
    cin>>m>>n;
    int arr1[m];
    int arr2[n];

    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    
    int ans= get_union(arr1,arr2,m,n);
    cout<<ans;
}