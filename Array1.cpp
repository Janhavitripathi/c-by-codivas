#include<bits/stdc++.h>
using namespace std;
int main()
{   //sum of all element in array
    int n,sum=0;
    cin>>n;
    int i,array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=array[i];
    }
    cout<<sum;
    return 0;
}