// Program to get matrix element and print it as a 2*2 Matrix using 2D Array
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int arr[2][2];
	cout<<"Enter matrix element"<<endl;
	for(int i = 0; i<2; i++)
	{
		for(int j = 0; j<2; j++)
		{
			cin>>arr[i][j]; // getting element
		}
	}
	for(int i = 0; i<2; i++)
	{
		for(int j = 0; j<2; j++)
		{
			cout<<arr[i][j]<<" ";// displaying element
		}
		cout<<endl;
	}
	return 0;
}
