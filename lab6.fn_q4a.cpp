//(By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.



#include<iostream>
using namespace std;

//define function
int min (int a, int b){

	if(a<b){
		return a;
	}
	else{
		return b;
	}
}


int main(){
	int p,q;
	cout << "Enter two numbers: ";			//take input
	cin >> p >> q;
	cout << "Minimum is: " << min(p,q) <<endl;	//pass number and call funtion ,print that
}


