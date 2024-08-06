#include<iostream>
using namespace std;
int main(){
int a, b, res;
cout<<"Enter the values of a and b "<<endl;
cin>> a >> b;
res= a-b;
try{
if (res != 0)
{
cout<< "Result (a/b) = "<<a/b<<endl;
}
else
{
throw ( res );
}
}
}
catch (int i) {
cout<< "Exception caught" ;
} }
