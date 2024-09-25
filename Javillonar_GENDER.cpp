#include <iostream>
using namespace std;

int main ()  
{
	// Create a c++ program that determine gender
	char gender;
	
	cout<<"Enter Gender: ";
	cin>> gender;
	
	switch(gender) {
		case 'f':
			cout<<"Long Hair"<<endl;
			cout<<"Soft Voice"<<endl;
			cout<<"Breast Develop"<<endl;
			break;
		case 'm':
			cout<<"Muscles Develop"<<endl;
			cout<<"Deep Voice"<<endl;
			cout<<"Height Increases"<<endl;
			break;
		default:
			cout<<"invalid gender output"<<endl;
			break;
}

return 0;	
		
}
