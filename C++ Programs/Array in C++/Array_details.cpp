// Accessing array elements
//
#include<iostream>
using namespace std;
int main(){
	//Syntax
    //	datatype array_name[row_size][col_size];
	int twoDimArray[2][2] = {{9,3},{9,1}; // two row, two column
	
	// Array initialization
	//datatype array_name[size] = {value};
	
	 // Array declaration
	//datatype array_name[size];
	
	  /*
	  Accessing 2D-Array (2x2 Matrix) element without loop
    	cout<<twoDimArray[0][0];
    	cout<<twoDimArray[0][1];
    	cout<<twoDimArray[1][0];
    	cout<<twoDimArray[1][1]; 
    	
    	Inserting element at specific index

    	cin>>twoDimArray[0][0];
    	cin>>twoDimArray[0][1];
    	cin>>twoDimArray[1][0];
    	cin>>twoDimArray[1][1]; 
	  */
    
    /*
	Accessing array element using for loop*/
    for(int i = 0; i<3; i++)
    {
    	for(int j = 0; j<3; j++)
    	{
    		cout<<"\t"<<twoDimArray[i][j];
		}
		cout<<endl;
	}
	
	/*
	Getting 2D array element from user
	
	int newArray[4][3];
    cout<<"Enter Elements : "<<endl;
    for(int i = 0; i<4; i++){
    	for(int j = 0; j<3; j++){
    		cin>>newArray[i][j];
		}
	}
	
    --------- OR ---------
	for(int i = 0; i<3; i++)
    {
    	for(int j = 0; j<3; j++)
    	{
    		cin>>twoDimArray[i][j];
		}
		cout<<endl;
	}
	*/
	
	/*
	Printing (Displaying) 2D array element in 3x3 Matrix 
	
	for(int i = 0; i<3; i++)
    {
    	for(int j = 0; j<3; j++)
    	{
    		cin>>twoDimArray[i][j];
		}
		cout<<endl;
	}
	*/
	



    
	return 0;
	
}
