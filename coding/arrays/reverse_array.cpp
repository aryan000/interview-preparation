#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int array[n];

for(int i=0;i<n;i++)
{
    cin>>array[i];
}

int j=n-1;
int i=0;
int temp=0;

while(i<j)
{
    temp=array[i];
    array[i]=array[j];
    array[j]=temp;
    i++;
    j--;
}
for(int i=0;i<n;i++)
{
    cout<<array[i]<<" ";
}
}