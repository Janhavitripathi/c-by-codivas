#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int i,j;
    char array[11]="UNIVERSITY";
     for(i=1;i<=5;i++)
     {
         for(j=1;j<=2*i;j++)
         {
             cout<<array[j-1];
         }
         cout<<endl;
     }
     int k=4;
     for(i=6;i<=9;i++)
     {   
        for(j=1;j<=2*k;j++)
        {
         cout<<array[j-1];
        } 
        cout<<endl;
        k--;
     }
    return 0;
}