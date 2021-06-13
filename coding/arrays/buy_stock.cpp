//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include<iostream>
using namespace std;

int buy_stock(int* arr, int n)
{
    int i,profit=0,maxprofit=0,buy=arr[0];
        
        for(i=0 ; i<n ; i++)
        {
            if(buy<arr[i])
            {
                profit=arr[i]-buy;
                if(maxprofit<profit)
                    maxprofit=profit;
            }
            
            else
                buy=arr[i];
        }
       return maxprofit;
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
    int ans= buy_stock(arr,n);
    cout<<ans;
}