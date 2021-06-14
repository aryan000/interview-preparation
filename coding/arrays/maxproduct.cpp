//https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
#include<iostream>
using namespace std;

int maxProduct(int* arr, int n)
{
   
    int min_val = arr[0];
    int max_val = arr[0];
 
    int max_product = arr[0];
 
    for (int i = 1; i < n; i++) {
 
        if (arr[i] < 0)
        {
            swap(max_val, min_val);
        }

        max_val = max(arr[i], max_val * arr[i]);
        min_val = min(arr[i], min_val * arr[i]);
 
        max_product = max(max_product, max_val);
    }
 
    return max_product;
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
    cout<<maxProduct(arr, n);
}