#include<iostream>
using namespace std;
int main()
{ 
  int num,reverse=0,rem;
  int temp;
  cout<<"enter the number";
  cin>>num;
  temp=num;
  while(num!=0)
  {
    rem=num%10;
      reverse=reverse*10+rem;
    num=num/10;
   } 
   if (temp==reverse)
   {
    cout<<"thenumber is palindrome";
   }
    else
    {
    cout<<"the number is not palindrome";
    }
    }