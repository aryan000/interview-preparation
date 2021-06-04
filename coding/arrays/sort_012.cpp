#include<iostream>
using namespace std;
void sort(int *arr, int n)
{
    int count0=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count0++;
        }
        else if(arr[i]==1)
        {
            count1++;
        }
        else
        count2++;
    }

    int i = 0;
 
    while (count0 > 0) {
        arr[i] = 0;
        i++;
        count0--;
    }

    while (count1 > 0) {
        arr[i] = 1;
        i++;
        count1--;
    }
 
    while (count2 > 0) {
        arr[i] = 2;
        i++;
        count2--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

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

    sort(arr,n);
}
