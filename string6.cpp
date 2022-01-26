#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    //uppercase to lowercase 
    string str="NKJHDSFJFHE";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<str;
    return 0;
}