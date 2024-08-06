#include<iostream>
using namespace std;
class car{
	private:
		int model;
	public:
		car(int y){
			model=y;
		}
	int operator ++(){
			model=model+2;
			return(model);
		}
		void display(){
			cout<<model<<endl;
		}
		int operator --(){
			model=model-2;
			return(model);
		}
	int operator >(car c){
		if(model>c.model){
			return 1;
		}
		else {
			return 0;
		}
	}	
};
int main(){
	car c(2010),c2(2019);
	c=++c;
	c.display();
	c=--c;
	c.display();
	if(c>c2){
		cout<<"c";
	}
	else {
		cout<<"c2";
	}
}
