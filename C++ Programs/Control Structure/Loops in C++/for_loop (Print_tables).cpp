// C++ Program to print table from 1 to 10
#include<iostream>
using namespace std;
int main(){
	// print table of each number from 1 to 10
	for(int i = 1; i<10; i++)
	{
		for(int j = 1; j<10; j++)
		{
			cout<<i<<" * "<<j<<" = "<<i*j<<endl;
		}
		  
	}
	/*
	To Print only table of 3 (Replace 3 by your own choice)
	
	for(int i = 1; i<10; i++)
	{
		  cout<<"3"<<" * "<<i<<" = "<<3*i<<endl;
	}
	
	*/
	 
	return 0;
}
