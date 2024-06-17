#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int arr[10], i;
    cout<<"enter 10 values";
    for(i=0; i<=9; i++)
    {
        cin>>arr[i];
    }
    cout<<"store array values \n";
    for(int i=0; i<=9; i++)
    {
        cout<<arr[i]<<"\t";
    }
}