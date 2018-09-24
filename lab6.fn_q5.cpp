//Write a program that includes the quetion (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 


#include<iostream>
using namespace std;

//Define add function
int add (int a,int b)
{
	int s;
	s = (a + b);
}

//define max function
int max (int a, int b){

	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

//define min function
int min (int a, int b){

	if(a<b){
		return a;
	}
	else{
		return b;
	}
}


//write main function
int main(){
	char l;
	cout << "'i' for addition\n" << "'j' for maximum\n" << "'k' for minimum\n";
	cout << "Please enter what operation do you want to perform: ";
	cin >> l;
	double m,n;
	cout << "Enter two numbers: \n";	//taking input
	cin >> m >> n;
	

	//conditional structure
	if(l==char(105)){				 	
		cout << "the addition is: " << add(m,n) <<endl;	 // call funtion, print result
	}

	else if(l==char(106)){
		cout << "Maximum is: " << max(m,n) <<endl;	//pass number and call funtion ,print that
	}

	else if(l==char(107)){
		cout << "Minimum is: " << min(m,n) <<endl;	//pass number and call funtion ,print that
	}

	else{
		cout << "Wrong input\n" << "Please Enter among (i,j,k)\n";
	}

return 0;
}


































  
