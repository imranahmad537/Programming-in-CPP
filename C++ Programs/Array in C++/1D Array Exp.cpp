#include<iostream>
using namespace std;
int main(){
	int integer[5];
	
//	cin>>integer[0];
//	cin>>integer[1];
//	cin>>integer[2];
//	cin>>integer[3];
//	cin>>integer[4];
//	cin>>integer[5];

for(int i = 0; i<=5; i++){
	cout<<"Enter elements for an array :"<<endl;
	cin>>integer[i];//input	
}
for(int i = 0; i<=5; i++){
	cout<<"Elements of an array :"<<endl;
	cout<<integer[i];//output	
}

	
	
	return 0;
}
