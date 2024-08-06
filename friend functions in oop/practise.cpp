#include<iostream>
using namespace std;
class calculator{
	protected:
	   int num1,num2;
	public:
		void cal(int x,int y){
			num1=x;
			num2=y;
		}
};
class sum:public calculator{
	protected:
		int s;
	public:
		void cal(int x,int y){
		s=x+y;
		cout<<s<<endl;	
		}
		
};
class sub:public sum{
		protected:
		int su;
	public:
		void cal(int x,int y){
		su=x-y;	
		cout<<su<<endl;
		}		
};
class div:public sub{
	protected:
		int d;
	public:
		void cal(int x,int y){
		d=x/y;	
		cout<<d<<endl;
		}		
};
int main(){
	div s;
	s.cal(10,2);
	s.cal(10,2);
	s.cal(10,2);
	s.cal(10,2);
	
}
