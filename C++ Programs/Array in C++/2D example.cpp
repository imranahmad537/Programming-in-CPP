// Program to get matrix element and print it as a 2*2 Matrix using 2D Array
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int arr[2][2]; //2 row, 2 column
	cout<<"Enter matrix element"<<endl;
	for(int i = 0; i<2; i++) // for insertion into array
	{
		for(int j = 0; j<2; j++)
		{
			cin>>arr[i][j]; // getting elements from user
		}
	}
	for(int i = 0; i<2; i++) // for accessing (displaying) elements of array
	{
		for(int j = 0; j<2; j++)
		{
			cout<<arr[i][j]<<" ";// displaying elements
		}
		cout<<endl;
	}
	return 0;
}

// for 3*3 matrix size will be [3][3] and so on
