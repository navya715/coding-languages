#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b,c,hcf;

cout<<"Enter the first number" <<'\n';

cin>>a;

cout<<"Enter the second number "<<'\n';

cin>>b; 

for(c=1; c<=a || c<=b; c++)
{ 

  if(a%c==0 && b%c==0)
  
  hcf=c; 
  
	}    
	
cout<<"HCF of the two numbers is " <<hcf<<'\n';

return 0;
}
	
	
