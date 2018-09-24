//Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, (By Reference) the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.

#include<iostream>
using namespace std;

//Define void function
void max (double a, double b, double &c){
	if(a>b){
		c=a;
	}
	else{
		c=b;
	}
}

int main(){
	
	double p,q,r;
	cout << "Enter two numbers: "<<endl;	//take input
	cin >> p >> q;				
	max (p,q,r);				//call function
	cout << "Maximum is: " << r <<endl;	//printing output

return 0;
}
