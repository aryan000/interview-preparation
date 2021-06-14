//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

#include<iostream>
using namespace std;

int max(int x, int y)
{
    if(x>y)
    return x;
    else
    return y;
}

int min_number_jumps(int arr[], int n)
{
 

    if (n <= 1)
        return 0;
 
    if (arr[0] == 0)
        return -1;
 
    
    int max_reach = arr[0];
    int step = arr[0];
    int jump = 1;
    for (int i = 1; i < n; i++) {
        if (i == n - 1)
            return jump;

        max_reach = max(max_reach, i + arr[i]);
 
        step--;
        if (step == 0) {
            jump++;
            if (i >= max_reach)
                return -1;
            step = max_reach - i;
        }
    }
 
    return -1;
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
    int ans= min_number_jumps(arr,n);
    cout<<ans;
}