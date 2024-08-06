#include<iostream>
using namespace std;
class reater{
	int x,y;
	public:
		void grt(int a){
			x=a;
		}
		friend reater operator> (reater,reater);
		void display(){
			cout<<x;
		}
};
reater operator> (reater X,reater Y){
   if(X.x>Y.x){
   	return(X);
   }
   else{
   	return(Y);
   }
}
int main(){
	reater obj,obj1,c;
	obj.grt(4);
	obj1.grt(5);
	c=obj>obj1;
   c.display();
}
