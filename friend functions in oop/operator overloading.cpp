#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void get(int x,int y){
			a=x;
			b=y;
		}
		void set(){
			cout<<" a= "<<a<<" b= "<<b<<endl;
		}
	complex operator +(complex s){
	
		s.a=a+s.a;
		s.b=b+s.b;
		return(s);
	}
};
int main(){
	complex c1,c2,c3;
	c1.get(3,4);
	c2.get(5,6);
	c3=c1+c2;  //c3=c1.operator+(c2)
	c3.set();
}
