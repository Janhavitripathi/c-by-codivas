#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] ,i;
    cout<<"enter 10 numbers";
    for(i=0;i<10;i++)
    {
     cin>>arr[i];
    }
    int n;
    cout<<"enter any number";
    cin>>n;
    for(i=0;i<10;i++)
    {if(n==arr[i])
    {
        cout<<"number is present in array";
    }
    else{
    cout<<"number is not present in array";
    }
}
}