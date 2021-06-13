#include<iostream>
using namespace std;

void common_elements(int* arr1, int* arr2, int* arr3, int size1, int size2, int size3)
{
    int i=0,j=0,k=0;

    while(i<size1&&j<size2&&k<size3)

    {
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr2[j]<arr3[k])
        {
            j++;
        }
        else{
            k++;
        }

    }
}

int main()
{
    int size1, size2,size3;
    cin>>size1>>size2>>size3;
    int arr1[size1];
    int arr2[size2];
    int arr3[size3];
for(int i=0;i<size1;i++)
cin>>arr1[i];

for(int i=0;i<size2;i++)
cin>>arr2[i];

for(int i=0;i<size3;i++)
cin>>arr3[i];

common_elements(arr1,arr2,arr3,size1,size2,size3);
}