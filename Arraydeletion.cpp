#include<bits/stdc++.h>
using namespace std;
//deleting an elememt from array 
int main()
{   int i,n;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    {
    cin>>array[i];
    }
   int pos=4;
   if(pos>n||pos<=0)
   {
     cout<<"invalid input of position";
   }
   for(i=pos-1;i<n-1;i++)
   {
    array[i]=array[i+1];
   }
   n--;
   for(i=0;i<n;i++)
   {
     cout<<array[i];
   }
   return 0;
}
