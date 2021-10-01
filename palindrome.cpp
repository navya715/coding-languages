#include<iostream>
using namespace std;

int main()

{
  int num,rev=0,rem,temp ;
  
  cout<<"Enter a Number " ;
  
  cin>> num ;
  
  temp = num;
  
  while(temp>0)
  
  {
       
   rem = temp % 10 ;
   rev = (rev*10 )+ rem ;
   temp = temp/10;
   
   }
  if(rev==num)
  
  cout<<"It is a Palindrome Number"<<'\n';
  
  else
  
  cout<<"It is not a Palindrome Number"<<'\n';
  
  cout<<rev;
  
  return 0; 
}
