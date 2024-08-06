#include<iostream>
using namespace std;
class shape{
	private:
		int area;
	public:
		void Area(int s){
			area=s;
		}
		void set(){
			cout<<" Area is "<<area<<endl;
		}
		shape operator +(shape ss){
			shape temp;
			temp.area=ss.area * ss.area;
			return(temp);
		}
	
};
int main(){
	int side,result;
	cout<<" Enter the side "<<endl;
	cin>>side;
	shape shape1,shape2,shape3;
	shape1.Area(side);
	shape2.Area(side);
	shape3=shape2+shape1;
	shape3.set(); 
}
