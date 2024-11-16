// C++ Program to findout maximum number among 4 integers
#include<iostream>
using namespace std;
int main(){
	int a = 9;
	int b = 18;
	int c = 1712;
	int d = 37;
	int max;
	
	max = a;
	max = (b > max) ? b : max;
	max = (c > max) ? c : max;
	max = (d > max) ? d : max;
	cout<<"Maximum number is : "<<max;
	return 0;
}
