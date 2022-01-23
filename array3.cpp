#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5],i,sum=0;
    cout<<"enter 5 elements";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;1<5;i++)
    {
     cout<<arr[i];   
     sum=sum+arr[i];
    }
     cout<<sum;
    return 0;
}