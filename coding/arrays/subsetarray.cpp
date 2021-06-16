//https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
#include<iostream>
#include<set>
using namespace std;

string issubset(int* arr1, int* arr2, int n, int m)
{
    set<int> s;
    string y="yes";
    string no="no";
    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(s.find(arr2[i])==s.end())
        {
            return no;
        }
    }
    return y;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
     for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    string s= issubset(arr1,arr2,n,m);
    cout<<s;
}