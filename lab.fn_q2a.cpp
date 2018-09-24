//(By Value) Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.


//including library
#include<iostream>
using namespace std;


//Define function
int add (int a,int b)
{
	int s;
	s = (a + b);
}

int main()
{
	int p,m,n;
	cout << "Enter two numbers: \n";	//taking input
	cin >> m >> n;
	p = add (m,n);				 //call function
	cout << "the addition is: " << p <<endl; //print result
}

	
