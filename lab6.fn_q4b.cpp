//Write a program with a function that takes two int parameters, finds the min, then returns the minimum. (By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.


#include<iostream>
using namespace std;

//Define void function
void min (double a, double b, double &c){
	if(a<b){
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
	min (p,q,r);				//call function
	cout << "Minimum is: " << r <<endl;	//printing output

return 0;
}
