#include<iostream>
using namespace std;
class s1{
	private:
		int x,Y;
	public:
		s1(int a){
			x=a;
		}
		friend class s2;
};
class s2{
	private:
		int i,f;
	public:
	void display(s1 y){
		f=1;
		for(i=1;i<=y.x;i++){
			f=f*(i);
		}
		cout<<f<<endl;
	}
};
int main(){
	s1 ss(4);
	s2 obj;
	obj.display(ss);
}
