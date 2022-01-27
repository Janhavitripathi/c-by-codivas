#include<bits/stdc++.h>
using namespace std;
int main()
//to find minimum number//
{   int i,n;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int key=0;
    for(i=0;i<n;i++)
    {   int currentVal=array[i];
        if(key>currentVal)
        {
            key=currentVal;
        }
    }
    cout<<key;
    return 0;
}