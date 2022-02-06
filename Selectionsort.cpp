#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[i]){
                int swap=array[j];
                array[j]=array[i];
                array[i]=swap;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<"  ";
    }
    return 0;
}