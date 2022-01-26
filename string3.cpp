#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{  
  string str;
  cout<<"enter string";
  cin>>str;
 int l,i;
 l=str.size();
 cout<<l;
 for( i=0;i<l/2;i++)
 {
   if(str[i]!=str[l-1])
   {
       cout<<"not a palindrom";
       break;
   }
 }
 if( i ==l/2)
 {
cout<<"palindrom";
 }
    return 0;
}