// C++ Program to find whether the number is even or odd using Ternary Operator
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Number to check : ";
	cin>>num;
	
	// Ternary Operator
	// (conditon) ? expression1 : expression2;
	// if conditon true, expression 1 will be executed
	// if condition false, expression 2 will be executed
	string res = (num % 2 == 0) ? "Even" : "Odd";
	cout<<res;
	
	return 0;
}

