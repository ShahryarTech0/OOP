#include<iostream>
using namespace std;
template <class T>
class swaping{
	private:
		T n1,n2,t;
	public:
		swaping(){
		cout<<"Enter the number 1"<<endl;
		cin>>n1;
		cout<<"Enter the number 2"<<endl;
		cin>>n2;
		t=n1;
		n1=n2;
		n2=t;
		cout<<"After swaping n1 = "<<n1<<endl;
		cout<<"After swaping n2 = "<<n2<<endl;
	}
};
int main(){
	swaping <double>obj;
}
