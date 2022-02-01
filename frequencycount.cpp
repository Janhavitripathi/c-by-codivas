#include<bits/stdc++.h>
using namespace std;
int main()
{  int j,i,n,count;
   cin>>n; 
    int array[n] ,freq;  
    for(i=0;i<n;i++)
    {
        cin>>array[i];  
    } 
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
            
        }
        cout<<count<<"   ";
         
    }
    return 0;
}    
  
    