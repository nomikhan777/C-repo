#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	int product , sum;
	float avg;
	cout<<" enter 4 numbers :";
	cin>>a>>b>>c>>d;
	sum = a+b+c+d;
	product = a*b*c*d;
	avg = sum/4;
	cout<<" sum of 4 numbers is : "<<sum<<endl;
	cout<<" product of 4 numbers is : "<<product<<endl;
	cout<<" average of 4 numbers is :"<<avg;
	
	
		
	
	return 0;
	
}
