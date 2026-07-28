#include<iostream>
using namespace std;
int main()
{
  int n;
  int remainder;
  int reverse =0;
  cout<<"Enter the number to be reversed:";
  cin>>n;
  while(n!=0)
{
  remainder = n%10;
  reverse = reverse*10 + remainder;
  n = n/10;
}
cout<<"The reversed number is: "<<reverse;

}