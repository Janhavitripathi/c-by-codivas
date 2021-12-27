#include<iostream>
using namespace std;
int main()
{
int num;
cin>>num;
int lastdigit;
num=num%10;
lastdigit=num;
int first;
while(num>0)
{
num=num/10;
first=num;
}
cout<<first<<endl;









}