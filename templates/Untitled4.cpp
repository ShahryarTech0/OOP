
//template function

#include<iostream>
using namespace std;
template <class T, class U>
T GetMax(T a, U b){
return (a>b?a:b);
}
int main () {
int i=5, j=6;
float l=10.5, m=5,n,k;
k=GetMax(i,l);
n=GetMax(l,m);
cout << k << endl;
cout << n << endl;
return 0; }
