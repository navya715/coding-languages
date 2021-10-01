#include <iostream>

using namespace std;

int main() {
	
int number;

cout<<"Enter the number";

cin>> number; 

int factorial=1;

for(int i=2;i<=number;i++) {

	
factorial= factorial*i;

}

cout<<"Factorial of"<<number<<" is "<<factorial<<'\n';

return 0; 

}
