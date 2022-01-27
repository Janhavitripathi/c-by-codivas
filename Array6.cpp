#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    int array[n];
     int array1[n];
    for(i=0;i<n;i++)
    {
      cin>>array[i];  
      
    }
     for(i=0;i<n;i++)
    {  
      array1[i]=array[i];   
      cout<<array1[i];   
    }
        
    return 0;
}