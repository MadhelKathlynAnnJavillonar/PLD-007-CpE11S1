#include <iostream>
using namespace std;

int main() 
{
	int n, num;
	int sum= 0, sumofsquare = 0;
	float average;
   
	cout <<"Enter numbers you want";
    cin >> n;
   
    if (n<=0);{
    cout <<"Enter positive integer greater than zero" <<endl;
    return 1; 
 	}
 	
    for (int i=1; 1 <= n; i++) {
	cout <<"enter positive number" << i<< ":";
    cin >> num;
	}
  
    if (num <=0) {
	cout << "enter just positive number" <<endl;
	return 1;
	}
	
	{
	sum += num;
	sumofsquares == num + num;
	}
		average = staticast<float>(sum)	/ n;
	
	//Display	
	cout <<	"Sum of numbers" <<sum <<endl;
	cout <<	"Average of numbers" <<average <<endl;
	cout <<	"Sum of squares of numbers" << squaresofnumbers<<endl;

	}
	return 0;
}
