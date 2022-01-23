#include<iostream>
using namespace std;
int main()
{
    int arr[10],i;
    cout<<"enter elements";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    int array[10];
    for(i=0;i<10;i++)
    {
        array[i]=arr[9-i];
        cout<<array[i];
    }
    return 0;
}