#include<iostream>
using namespace std; 
int main(){
	int A[3][3] = {{3,4,5},{9,8,7},{9,8,7}};
	int B[3][2] = {{3,3},{9,7},{6,3}};
	int C[3][3];
	
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
		{
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"After Transpose"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
		{
			C[i][j] = A[j][i] ;
			cout<<C[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
