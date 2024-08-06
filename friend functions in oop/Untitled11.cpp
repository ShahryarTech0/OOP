class sum{
	private:
		int x;
	public:
		sum(int num){
			x=num;
		}
		friend void s(sum);
};
void s(sum a,sum b){
	return(a.x+b.x);
}
void main(){
	sum ss(10),s1(20);
	s(ss,s1);
}
