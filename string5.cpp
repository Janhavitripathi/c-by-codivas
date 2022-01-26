#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   //lowercase to uppercase
    string str="janhavi";
    
    for(int i=0;i<str.size();i++)
    {
       if(str[i]>='a'&&str[i]<='z')
       {
          str[i]-=32;
       }
       
    }
    cout<<str;
    return 0;
}
