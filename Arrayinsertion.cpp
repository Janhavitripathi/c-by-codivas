//program to insert an element in an array

#include<bits/stdc++.h>
using namespace std;
int main()
{   int i,n;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int pos,element;
    pos=2,element=40;//pos=2-->index=1//
     for(i=n-1;i>=pos-1;i--)
     {
        array[i+1]=array[i]; 
     }
      array[pos-1]=element;
      for(i=0;i<=n;i++)
      {
          cout<<array[i]<<endl;
      }
    return 0;
}