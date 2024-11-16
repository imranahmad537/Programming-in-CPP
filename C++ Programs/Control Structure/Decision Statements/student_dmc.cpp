// C++ Program to get six subject marks of a student and calculate its average, total and percentage
#include<iostream>
using namespace std;
int main(){
	int eng, maths, comp, phy, urdu, mtq, total;
	float average, percentage;
	
	cout<<"Enter English Marks : "<<endl;
	cin>>eng;
	
	cout<<"Enter Mathematics Marks : "<<endl;
	cin>>maths;
	
	cout<<"Enter Computer Science Marks : "<<endl;
	cin>>comp;
	
	cout<<"Enter Physics Marks : "<<endl;
	cin>>phy;
	
	cout<<"Enter Urdu Marks : "<<endl;
	cin>>urdu;
	
	cout<<"Enter Mutala Quran Marks : "<<endl;
	cin>>mtq;
	
	
	//Total
	total = eng + maths + comp + phy + urdu + mtq;
	
	//Average
	average = total / 6.0;
	cout<<"Total : "<<total<<endl;
	cout<<"Average : "<<average<<endl;
	
	// Percentage
	percentage = (float) total/550 * 100; // Typecasting
	
	cout<<"Percentage is : "<<percentage<<endl;
	
	
}
