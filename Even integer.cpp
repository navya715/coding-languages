#include <iostream>
using namespace std;

int main ()
{ 
  int number, remainder;
  
  cout<< "Enter a number  ";
  
  cin>>number; 
  
  remainder = number%2;
  
  if ( remainder == 0 ) 
  
  cout<< number<< " is an Even integer " <<'\n';
  
  else 
  
  cout<< number << " is an odd integer "<< '\n';
   
   return 0; 
}
