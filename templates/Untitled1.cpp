
//template class

#include <iostream>
using namespace std;
template <class T>
class mypair{
private:
       T a,b;
public:
mypair (T first, T second) {
a=first;
b=second;
}
T getmax(){
T retval;
retval = a>b? a : b;
return retval;
}
};
int main () {
mypair <int> myobject (100, 75);
cout << myobject.getmax(); 
return 0;

}
