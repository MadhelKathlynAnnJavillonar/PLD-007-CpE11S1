#include <iostream>
using namespace std;

int main()
{
	// Initialization of T.I.P. Grading System
	int x;
   
   cout<<"Input grades"<<endl;
   cin>>x;

	//Process of computing the grades

	if ((x>99)&&(x<=93.99))
	{
		cout<<"Execellent"<<endl;
	}
	
	else if ((x<93.99)&&(x>=88.5))
	{
		cout<<"Superior"<<endl;
	}

	else if ((x<88.49)&&(x>=83))
    {
		cout<<"Meritorious"<<endl;
    }

	else if ((x<83)&&(x>=77.5))
	{
		cout<<"Very good"<<endl;
	}

	else if ((x<77.5)&&(x>72))
    {
		cout<<"Good"<<endl;
    }
 	else if ((x<72)&&(x>65.5))
	{
		cout<<"Very satisfactory"<<endl;
    }
  	else if ((x<65.5)&&(x>=61))
	{
		cout<<"Satisfactory"<<endl;
 	}

	else if ((x<61)&&(x>55.5))
    {
		cout<<"Fair"<<endl;
    }

	else if ((x<55.5)&&(x>50))
	{
		cout<<"Passing"<<endl;
    }
	
	else if ((x<50)&&(x>49.9))
    {
		cout<<"Incomplete"<<endl;
    }
	
	else
	{
		cout<<"Failed"<<endl;
    }
  return 0;
}

