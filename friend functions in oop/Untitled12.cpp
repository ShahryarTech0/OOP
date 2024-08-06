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
		int i,f=1;
	void display(s1 y){
		for(i=y.x;i!=1;i--){
			f=f*(y.x); //4 3
		}
	}
};
int main(){
	s1 ss(5),
	s2 obj;
	obj.display(ss)
}
