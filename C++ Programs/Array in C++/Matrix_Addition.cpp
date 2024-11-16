#include<iostream>
using namespace std; 
int main(){
	int A[3][3] = {{3,4,5},{9,8,7},{9,8,7}};
	int B[3][3] = {{3,3,9},{9,7,1},{6,3,7}};
	int C[3][3];
	
	cout<<"We are Adding These two Matrices"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
		{
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"--------------------"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
		{
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"After Adding..."<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
		{
			cout<<A[i][j] + A[i][j]<<"\t" ;
//			cout<<C[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
