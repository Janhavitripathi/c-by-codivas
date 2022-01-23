#include<iostream>
using namespace std;
int main()
{
    int n,m,arr[2][2];
    for(n=0;n<2;n++)
    {
        for(m=0;m<2;m++)
        {
            cin>>arr[n][m];
        }

    }
     for(n=0;n<2;n++)
    {
        for(m=0;m<2;m++)
        {
            cout<<arr[n][m];
        }
        cout<<endl;
    }
    
}