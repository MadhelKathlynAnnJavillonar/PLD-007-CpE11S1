#include <iostream>
using namespace std;

int main ()  
{
	// Create a c++ program to determine if alphabet is vowel or crossaint
	char c;

	cout<<"Enter the character:";
	cin>>c; 
	
	switch (c) 
	{
		case 'a':
			cout<<"vowel";
		break;
		
		case 'A':
			cout<<"Vowel";
		break;
		
		case 'e':
			cout<<"Vowel";
		break;
	
		case 'E':
			cout<<"Vowel";
		break;
		
		case 'i':
			cout<<"Vowel";
		break;
		
		case 'I':
			cout<<"Vowel";
		break;
		
		case 'o':
			cout<<"Vowel";
		break;
		
		case 'O':
			cout<<"Vowel";
		break;
		
		case 'u':
			cout<<"Vowel";
		break;
		
		case 'U':
			cout<<"Vowel";
		break;
		
		default:
			{
				cout<<"consonant";
			 	break;
			}
			
	}
return 0;	
		
}
		
