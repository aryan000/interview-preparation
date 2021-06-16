#include<iostream>
#include<algorithm>
using namespace std;

bool triplet_sum(int* arr, int n, int k)
{
     int l, r;
    sort(arr, arr+n);

    for (int i = 0; i < n - 2; i++) {
    l = i + 1;
     r = n - 1; 
        while (l < r) {
            if (arr[i] + arr[l] + arr[r] == k) {
                return true;
            }
            else if (arr[i] + arr[l] + arr[r] < k)
                l++;
            else 
                r--;
        }
    }
 
    return false;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bool ans= triplet_sum(arr,n,k);
    cout<<ans;
}