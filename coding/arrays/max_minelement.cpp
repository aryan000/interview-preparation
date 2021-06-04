#include<iostream>
#include<climits>
using namespace std;
void min_max(int *arr, int n)
{
    int min=INT_MAX;
    int max=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"maximum element is:"<<max<<endl;
    cout<<"minimum element is:"<<min<<endl;

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
    min_max(arr,n);
}