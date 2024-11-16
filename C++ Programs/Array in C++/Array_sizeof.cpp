// C++ Program to findout size of the array & number of elements in Array
#include<iostream>
using namespace std;
int main(){
	double array[5] = {2,9,8,1,4};
	// sizeof(array_name) : this method return size of the array
	cout<<"Size of Array is : "<<sizeof(array)<<endl;
	//Number of elements = size of Array  / size of each element
	cout<<"Number of element in Array : "<<sizeof(array)/sizeof(array[0]);
	return 0;
}
