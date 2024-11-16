//C++ Program to read an address of a person and exit when the user enter dot(.) using do-while loop
#include<iostream>
using namespace std;
int main(){
	
	// do-while loop
	char address[30];// character array
	char ch;
	
	do{
		cout<<"Enter address :"<<endl;
	    cin>>address;
	    cout<<"Enter y to continue or . to exit/stop"<<endl;
	    cin>>ch;
	}
	while(ch != '.');
	
	return 0;
}
