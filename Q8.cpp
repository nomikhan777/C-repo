#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	//int a =45;
	//cout<<" The value of a  was :"<<a<<endl;
	//a=34;
	//cout<<" The value  of a is :"<<a<<endl;
	//***********CONSTANTS IN C++***************
	//const int a = 3;
	//cout<<" The value of a  was :"<<a<<endl;

	//cout<<" The value  of a is :"<<a<<endl;
	//*****************Manipulators  IN C++****************
	
	int a = 6 , b= 66 , c= 3222;
	cout<<" The value  of a without setw is :"<<a<<endl;
	cout<<" The value  of b without setw is :"<<b<<endl;
	cout<<" The value  of c without setw is :"<<c<<endl;
	
	
	
	cout<<" The value  of a  is :"<<setw(4)<<a<<endl;
	cout<<" The value  of b  is :"<<setw(4)<<b<<endl;
	cout<<" The value  of c  is :"<<setw(4)<<c<<endl;
	
	
	
	return 0 ;
}
