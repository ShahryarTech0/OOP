#include<iostream>
using namespace std;
class car{
	private:
		int model;
	public:
		void get(int x){
			model=x;
		}
		void display(){
			cout<<model<<endl;
		}
		void operator ++(int){
			car temp;
			temp.model=model+2;
		}
		void operator --(int){
			car temp;
			temp.model=model-2;
		}
		int operator>(car c){
		if(model>c.model){
			return 1;
		}	
		else{
			return 0;
		}
		}
		
};
int main(){
	car c1,c2,c3;
	c1.get(2015);
	c2.get(2010);
	if(c1>c2){
		cout<<" c1 is latest"<<endl;
	}
	else{
		cout<<" c2 is latest"<<endl;
	}
}
