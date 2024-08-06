class demo
{
private:
int x,y;
public:
demo(int a,int b)
{
x=a;
y=b;
}

friend class frnd;
};
class frnd
{
public:
void display(demo d1)
{

cout<<“x is=”d1.x;
cout<<“y is=”d1.y;

}

};

void main()

{
demo d2(10,40);
frnd f1;
f1.display(d2);
getch();

}
