#include <iostream>
using namespace std;

int main ()  
{
	// Create a c++ program that applies MDAS Calculator
	char op;
	float num1, num2, result;

	cout<<"Enter Number:";
	cin>> num1;
	cout<< "Enter Desired Operator (+, -, *, /):";
	cin>> op;
	cout<< "Enter Number:";
	cin>> num2;

	switch(op)	
	{
		case '+': 
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
		    result = num1 / num2;
			break;
	}
	cout<<"result: "<< result<<endl;
	
	
return 0;	
		
}
