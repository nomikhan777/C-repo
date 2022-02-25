#include<iostream>
using namespace std;
int main(){
	int a , b ;
	cout<< " enter the 1st number : ";
	cin>>a;
	cout<< " enter the second number : ";
	cin>>b;
	cout<< " you input the numbers as " <<a<<" and " <<b<<endl;
	a =a+b;
	b =a-b;
	a =a-b;
	cout<< " the values of numbers after swapping are "<<a<<" and "<<b<<endl;
	
	
}
