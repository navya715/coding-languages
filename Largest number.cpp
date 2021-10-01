#include <iostream>
using namespace std;

int main()
{ 
int a,b,c;

cout <<" Enter three integers ";

cin>>a>>b>>c;

if ( a>b && a>c)

cout<<a<<"is the largest integer of three numbers"<<'\n';

else if( b>a && b>c)
 
cout<<b<<"is the largest integer of three numbers"<<'\n';

else if( c>a && c>b)
 
cout<<c<<"is the largest integer of three numbers"<<'\n';

return 0 ;
}
