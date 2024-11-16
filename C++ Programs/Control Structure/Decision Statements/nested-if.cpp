// C++ Program to demonstrate the concept of Nested if Statement
#include<iostream>
using namespace std;
int main()
{
	bool hasLicense = true;
	bool hasFuel = true;
	
	if(hasFuel)
	{
		if(hasLicense)
		{
			cout<<"You have a  fuel & valid Driving License"<<endl;
			cout<<"You can drive...";
		}
		else{
			cout<<"You donot have a valid Driving License"<<endl;
			cout<<"You cannot drive...";
		}
	}
	else{
		cout<<"You donot have a  fuel & valid Driving License"<<endl;
		cout<<"You cannot drive...";
	}
}

