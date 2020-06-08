#include<iostream>
using namespace std;
int main()
{
    long long size,rotation;
    cin>>size>>rotation;
    long long i;
    int arr[size];

    for(i=0;i<size;++i)
    {
        cin>>arr[i];

    }
    int a[size];
    long long n;
    n=0;
    for(int i=rotation;i<size;++i)
    {
        a[n]=arr[i];
        ++n;


    }
    for(int j=0;j<rotation;++j)
    {
        a[n]=arr[j];
        ++n;
    }
    for(int i=0;i<size;++i)
    {
        cout<<a[i]<< ' ';
    }





}
