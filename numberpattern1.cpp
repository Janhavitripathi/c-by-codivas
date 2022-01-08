#include<iostream>
using namespace std;
int main()
{ 
 int i,j;
 for(i=1;i<=4;i++)//1,2
 {
     for(j=1;j<=4;j++)//1,1
     {
         if(j<=i)
         {
       if((i+j)%2==0)  //true,f
       {
           cout<<"1";//1
     }
     
     else{
         cout<<"0";//  0
     }
         }
         else
         {
             cout<< " ";
         }
     }
     cout<<endl;
 }   
 return 0;
}
