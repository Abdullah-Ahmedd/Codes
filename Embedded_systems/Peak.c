#include <iostream>
using namespace std;
void findpeak(int arr[],int size)
{
if(size==1)
cout<<"the size of this array is only 1 so the peak is:"<<arr[0];
if(arr[size-1]>=arr[size-2])
cout<<"the last element is the peak"<<arr[size-1];
for(int i=1;i<size-1;i++)
{
    if(arr[i-1]<=arr[i] && arr[i]>=arr[i+1])
{
    cout<<"there is a peak at index "<<i<<" its value it: "<<arr[i]<<endl;
}
}
}
int main()
{
int arr[100];
int x;
int temp;
cout<<"enter the array size you want :";
cin>>x;
for(int i=0;i<x;i++)
{cout<<"please enter the element number "<<i<<":";
    cin>>temp;
arr[i]=temp;}
findpeak(arr,x);
return 0;
}
