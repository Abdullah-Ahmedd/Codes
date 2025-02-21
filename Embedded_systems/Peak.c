#include <iostream>
using namespace std;
void findpeak(int arr[],int size)
{
if(size==1)
cout<<"the size of this array is only 1 so the peak is:"<<arr[0];

}
int main()
{
int arr[100];
int x;
int temp;
cout<<"enter the array size you want :";
cin>>x;
for(int i=0;i<x;i++)
{cin>>temp;
arr[i]=temp;}
findpeak(arr,x)
}
