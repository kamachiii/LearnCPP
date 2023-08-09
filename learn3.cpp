#include <iostream>
using namespace std;

int main(){
	/* C++ Variables
	- Int = stores integers without decimals such as 123
	- double = stores floating with decimals such as 19.99
	- char = stores single characters, such as 'A' or 'B'
	- string = stores text, such as 'Hello world'
	- bool = stores values with two states: true or false
	
	SYNTAX
		type variableName = value;
	*/
	
	int myNum = 15;
	cout << myNum << endl; //output 15 with type data integer
	myNum = 17; // edited value variable myNum
	cout << myNum << endl; // output 17 with type data integer
	
	// combine both text and a variable 
	cout << "I am " << myNum << " years old" << endl;
	
	// Using const for constant (unchangeable and read-only)
	const int minutesPerHours = 60; // create var minutesPerHours with value 60
	int minutesPerHours = 30; // Err for edited value
	cout << "Minute per hours is " << minutesPerHours;
}