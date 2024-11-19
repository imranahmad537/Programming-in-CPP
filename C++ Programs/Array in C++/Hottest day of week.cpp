#include<iostream>
using namespace std;
int main(){
	int temp[7];
	int max, hot;
	cout<<"Enter 7 Days Temperature..."<<endl;
	for(int i = 0; i < 7; i++){
		cin>>temp[i];
	}
	for(int i = 0; i < 7; i++){
		if(temp[i] > max){
			max = temp[i];
			hot = i + 1;
		}
	}
	cout<<"Hottest day of the week is : "<<hot;
}
