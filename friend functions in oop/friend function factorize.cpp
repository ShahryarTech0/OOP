#include<iostream>
using namespace std;
class s1{
	private:
		int x,Y;
	public:
		s1(int a){
			x=a;
		}
		friend void display(s1);
};
 void display(s1 y){
		int f=1,i;
		for(i=1;i<=y.x;i++){
			f=f*(i);
		}
		cout<<f<<endl;
	}
int main(){
	s1 ss(4);
	display(ss);
	
}
