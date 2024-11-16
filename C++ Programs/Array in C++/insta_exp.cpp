// Program to print 3*3 Matrix using 2D Array
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	string des[3] = {"Post","Follower","Following"};
	int count[3] = { 0, 25, 239};
	for(int i = 0; i<3; i++)
	   cout<<des[i]<<setw(11);
	   
	cout<<"\n";
	for(int j = 0; j<3; j++)
	   cout<<count[j]<<setw(10);
	return 0;
}
