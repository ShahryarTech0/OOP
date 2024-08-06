#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;	
	public:
		void get(int x,int y)
		{
			a=x;
			b=y;
		}
		void set()
		{
			cout<<" a= "<<a<<" b= "<<b<<endl;
		}
		friend complex operator-(complex);
};
complex operator-(complex X)
{
	
	X.a=-X.a;
	X.b=-X.b;
	return(X);
}
int main()
{
	complex c1,c2;
	c1.get(3,4);
	c2=-c1 ;//c2=operator-(c1)
	c2.set();
}
