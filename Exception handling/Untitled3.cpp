#include<iostream>
using namespace std;
class complex{
	int number,rem;
	public:
		void get(int n){
			number=n;
		}
		friend complex cal(complex);
		void display(){
			cout<<rem<<endl;
		}
};
complex cal(complex a){
	while(a.number!=0){
		a.rem=a.number%2;
		a.number=a.number/2;	
	}
	return(a);
	
}
int main(){
	complex obj,c;
	obj.get(4);
	c=cal(obj);
	c.display();
}

