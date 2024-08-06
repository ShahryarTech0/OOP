#include<iostream>
using namespace std;
int main(){
	int num,i,k=1,f=1;
	cout<<"Enter number"<<endl;
	cin>>num;
	try{
		if(num==(-1)){
		throw -1;
	}
	if(num<-1){
		throw -1;
	}
	}
	catch(int n){
		cout<<"Exception caught";
		exit(1);
	}
	while(num!=0){
		f=f*num;
		num--;
	}
	cout<<"f = "<<f<<endl;
}

