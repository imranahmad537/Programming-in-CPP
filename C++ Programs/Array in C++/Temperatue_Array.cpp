#include<iostream>
using namespace std;
int main(){
	double temperature[365] = {0.0};
	for(int i = 0; i < 365; i++){
		cout<<"Enter High Temperature for day "<<i+1<<endl;
		cin>>temperature[i];
	}
	return 0;
}
