// Q no 6
// Return sum from num(user choice) to 1 ( 4+3+2+1 )

#include<iostream>
using namespace std;
int main(){
	int i = 1;
	int num;
	cin>>num;
	int sum;
	while(i<=num)
	{// condition
	sum+=i; //sum = sum + i
	i++;
	}
	cout<<"Sum is : "<<sum<<endl;
}
