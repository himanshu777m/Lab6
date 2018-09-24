// Write a program with a function that takes two int parameters, adds them together, then returns the sum, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.

//including library
#include<iostream>
using namespace std;


//declare void function
void add (int a, int b, int &c){
	c=a+b;
}

int main(){
	int p,q,s;
	cout << "Enter two numbers: \n";	//asking for input
	cin >> p >> q;				//take values
	add (p,q,s);				//call function
	cout << "the sum is: " << s <<endl;
return 0;
}
	
