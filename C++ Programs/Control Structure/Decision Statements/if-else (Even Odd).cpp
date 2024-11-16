#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Number to check : ";
	cin>>num;
	
	if(num % 2 == 0)
	{
		cout<<"Even"<<endl;
	}
	else
	{
		cout<<"Odd";
	}
	
	return 0;
}

