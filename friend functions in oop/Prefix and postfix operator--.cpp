#include<iostream>
using namespace std;
class decreament{
	private:
		int number;
	public:
		void get(int x){
			number=x;
		}
		decreament operator --(){  //predecreament operator
			decreament temp;
			temp. number=number*4;
			return(temp);
		}
		decreament operator --(int){  //postdecreament operator
			decreament temp;
			temp.number=number/4;
			return(temp);
		}
		
		void display(){
			cout<<" "<<number<<endl;
		}
};
int main(){
	int number;
	cout<<" Enter the Number "<<endl;
	cin>>number;
	decreament d,d1;
	d.get(number);
	d1= --d;  //d.operator--()  this is predecreament
	cout<<"After the Prefix the number is ";
	d1.display();
	d1=d--;  //d.operator--() this is postdecreament
	cout<<"After the Postfix the number is ";
	d1.display(); 
}
