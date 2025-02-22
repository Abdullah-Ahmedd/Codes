#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    cout<<"size of shows"<<sizeof(arr)<<endl;
int x=10;
float y=3.14;
string abc="Hellow";
void * vptr;
vptr=&x;
cout<<*(int*)vptr<<endl;
vptr=&y;
cout<<*(float*)vptr<<endl;
vptr=&abc;
cout<<*(string*)vptr<<endl;
return 0;
}
