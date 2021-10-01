#include <iostream>

using namespace std;

int main ()
{

    int age;
	
	cout<<"enter your age";
	
	cin>> age;
	
	if(age<20) {
	cout<<"you are too young";
	}    
	
	if (age>=20 &&age<=60) {
	cout<<"welcome to our company";	
	}  
	
	if (age>=60) {
	cout<<"sorry you are too old";	
	} 
	return 0;
	
}
