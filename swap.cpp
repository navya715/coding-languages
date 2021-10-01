#include <iostream>  
using namespace std;  

int main()  
{  

int a=6, b=8;    
  
cout<<"Before swap a= "<<a<<'\n'<<" b= "<<b<<'\n';
      
a=a+b; //a=14 
   
b=a-b; //b=6
    
a=a-b; //a=8
     
cout<<"After swap a= "<<a<<'\n'<<"b= "<<b<<'\n';
      
return 0;
}
