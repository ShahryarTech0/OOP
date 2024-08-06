#include<iostream>
using namespace std;
class perimeter{
	private:
		int length,breath;
	public:
		void get(int l,int b){
			length=l;
			breath=b;
		}
		friend class printclass;
};
class printclass{
	public:
	void display(perimeter x){
		cout<<"PErimeter is "<<x.length*x.breath<<endl;
	}
};
int main(){
	int l,b;
	cout<<"length"<<endl;
	cin>>l;
	cout<<"breath"<<endl;
	cin>>b;
	perimeter obj;
	obj.get(l,b);
	printclass obj1;
	obj1.display(obj);
}
