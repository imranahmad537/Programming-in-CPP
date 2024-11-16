// Program to get element from the user and display it as 3*3 Matrix
#include<iostream>
using namespace std;
int main(){
	string array[3][4];
	cout<<"Enter Student Details : "<<endl;
	
	// Getting array elements
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cin>>array[i][j];
		}
	}
	// Displaying Array elements
	for(int i = 0; i<3; i++){
		for(int j = 0; j<4; j++){
			cout<<"\t"<<array[i][j];
		}
		cout<<endl;//new line
	}
	return 0;
}
// The above C++ Program has two loops i & j
// The First loop get the elements from the user according to the specified size
// The second loop is used to display the elements of Array as 3*3 Matrix
