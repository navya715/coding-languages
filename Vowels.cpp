#include <iostream>
using namespace std;

int main(){
	
cout << "Enter the alphabet ";

char input;

cin >> input;

if (input =='A' || input =='E' || input =='I' || input =='O' || input
=='U' || input =='a' || input =='e' || input =='i' || input =='o' || input =='u') {
	
cout <<input << " is an vowel";

}

else{
	
cout << input << " is not an vowel";

}

return 0; 

}
