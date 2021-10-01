#include <iostream>
using namespace std;
int main  ()
{

int a,b,i,x ;
cout<<"enter a number";
cin>>a;
cout<<"enter number";
cin >>b; 

x=a*b;

cout<<"lcm of " <<a<<" and"<<b<<"is";

for (i=1;i<=x; i++)

{
	
	if (x%i==1 && i%a==0 && i%b==0)
	{ 
	cout<<i; 
	break;
	}
} 

return 0;
}
