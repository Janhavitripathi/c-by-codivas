#include<bits/stdc++.h>
using namespace std;
int main()
{
    //count all negative numbers in an array
    int i,n;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
     int count=0;
    for(i=0;i<n;i++)
    {  
        if(array[i]<0)
        {
          count++;
        }
    }
    cout<<count;
    return 0;
}
