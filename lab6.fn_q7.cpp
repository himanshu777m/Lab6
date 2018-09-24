/*   UpperCase and LowerCase
Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
*/

#include<iostream>
using namespace std;


//define function 
char toUpper(char i){
	char j;		
	j = i-32;
return j;	
}

char toLower(char i){
	char j;		
	j = i+32;
return j;	
}

//Write a main program
int main(){
	char ch;


	//taking input
	cout<<"Write a single charector: \n";
	cin >> ch;
			
	//detect user input Changing case
	if(65<=ch && ch<=90){
		cout << "Lower case value: " << toLower(ch) <<endl;
	}
	else{
		 cout << "Upper case value: " << toUpper(ch) <<endl;
	}

return 0;
}
