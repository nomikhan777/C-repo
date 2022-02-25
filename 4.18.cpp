#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float cel,faren;
	cout<<" enter temperature in celcius: ";
	cin>>cel;
	faren= 9 / 5 * cel + 32;
	cout<< " temperature in fahrenheit is  ";
	cout<<setprecision(2)<<faren;
	
	
}
