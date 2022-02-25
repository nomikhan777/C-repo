#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a, b, c;
	double s, area;
	cout<<" enter the value of  side a :";
	cin>>a;
	cout<<" enter the value of side b :";
	cin>>b;
	cout<<" enter the value of side c :";
	cin>>c;
	s = (a+b+c)/2;
	area=sqrt(s *(s-a) * (s-b) * (s-c));
	cout<<" area of triangle: "<<area;
	
	
	
	
	
	
	
	return 0 ;
}
