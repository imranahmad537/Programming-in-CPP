// C++ program to get 10 character(alphabets) from a user and sort it in decending order
#include<iostream>
using namespace std;
int main(){
	char array[10];
	int temp;
	cout<<"Enter 10 character from keyboard : "<<endl;
	
	// Getting 
	for (int i = 0; i < 10; i++){
		cin>>array[i];
	}
	
	for(int i = 0; i < 10; i++){
		for(int j = i + 1; j < 10; j++)
		{
			if(array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}	
	}
	
	cout<<"Sorted Array in Decending order ..."<<endl;
	for(int i = 0; i < 10; i++){
		cout<<array[i]<<endl;
	}
	return 0;
}

