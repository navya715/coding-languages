#include <iostream>
using namespace std;

int main()
{ 
  for(int i=1; i<=7; i=i+1)
  { 
  for (int j=1; j<=7 ; j++) 
  {
  
 if ( j==1||j==7||(j==i&&i<=4) || (j==8-i && i<=4)) 
  {
  	cout<<"m";
  } 
  else 
  { 
   cout<<" ";

  } 
  
}

 cout<<'\n';
 
} return 0;

}
