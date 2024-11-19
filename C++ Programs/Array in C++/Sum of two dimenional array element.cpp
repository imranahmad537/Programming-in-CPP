/*
 C++ program find the sum of the values of a 
two dimentional array int Test[2][3] 
display the result 
*/
#include<iostream>
using namespace std;
int main(){
	int Test[2][3] = {{2,3,8},{8,9,1}};
	int sum;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++)
		{
			sum += Test[i][j];
		}	
	}
	cout<<"Addition is :"<<sum<<endl;
	return 0;
}

