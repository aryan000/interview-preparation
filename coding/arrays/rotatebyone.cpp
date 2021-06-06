//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
# include<iostream>
using namespace std;

void rotatebyone(int* arr, int n)
{
    int last= arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[0]=last;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
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
    rotatebyone(arr,n);
}