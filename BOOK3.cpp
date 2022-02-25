#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float area,cir,r;
	cout<<" enter the radius: ";
	cin>>r;
	area = 4 * 3.14* r* r;
	cir = (4/3)*3.14*r*r*r;
	cout<<" area is :"<<area<<endl;
	cout<<" circumference is : "<<cir;
	
	return 0;
}
