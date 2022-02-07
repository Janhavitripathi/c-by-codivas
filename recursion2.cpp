#include<bits/stdc++.h>
using namespace std;

int fun(int i);
int fun(int n)
{  if(n==0){
    return 0;}
    int prevSum=fun(n-1);
    return n+prevSum;
  
}
int main()
{
  int n;
  cin>>n;
  cout<<fun(n);
  return 0;
}