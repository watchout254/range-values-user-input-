#include <iostream>
#include <math.h>

using namespace std;

int main() {
cout << "\t\tWelcome to our program!\n";
cout<<"\tTry this please.\n";

int dig;
cout<<"Enter an integer(20-400):";
cin>>dig;

if (dig < 20 ) {
	cout<<"This program does not deal in complex numbers";
}
	
else if(dig > 400) {
	cout<<"Number out of range [20-400]";
}
	
else{
	cout <<" Successful!! it runs";
}
	return 0;
}
