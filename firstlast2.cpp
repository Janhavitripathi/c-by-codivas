#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"enter the number";
cin>>num;
int lastdigit;
lastdigit=num%10;
cout<<"lastdigit  of number";
cout<<lastdigit<<endl;
int firstdigit;
while(num>10)
{
num=num/10;
firstdigit=num;
}
cout<<"firstdigit of number";
cout<<firstdigit<<endl;
firstdigit=firstdigit+lastdigit;
lastdigit=firstdigit-lastdigit;
firstdigit=firstdigit-lastdigit;
cout<<"lastdigit is";
cout<<lastdigit<<endl;
cout<<"firstdigit is";
cout<<firstdigit;
return 0;

}





