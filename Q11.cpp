#include<iostream>
using namespace std;
int main(){
	int age;
	
	
	cout<<" tell me your age:"<<endl;
	cin>>age;
	if((age<18)&&(age>0)){
		
		cout<<" you cannot come to my party"<<endl;
	}
	else if(age==18){
	
		cout<<" you are a kid and you will get a pas to the party"<<endl;
	}
	else if(age<1){
		cout<<" you are not yet born "<<endl; 
	}
	else{
		cout<<" you can come to party "<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
