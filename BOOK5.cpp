#include<iostream>
using namespace std;
int main(){
	int age, months , days;
	cout<<" Enter age in years :";
	cin>>age;
	months = age*12;
	days   =age*365;
	cout<<" Age in months:"<<months<<endl;
	cout<<" Age in days:"<<days<<endl;
	
	
	return 0;
}
