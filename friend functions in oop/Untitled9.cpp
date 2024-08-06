class sample
{
int a;
int b;
public:
void setval(){ 
   a=25,b=40
   }
friend float mean(sample s);  
};

float mean(sample s)
{ 
return (s.a+s.b)/2.0;
}

void main()
{
sample X;
cout<<mean(X);
}
