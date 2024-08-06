#include<fstream>
#include<iostream>
using namespace std;
class student{
private:
string name;
int age;
float gpa;
public:
setdata(string n, int a, float g){
name=n;
age=a;
gpa=g;
}
void getdata(){
cout<< "\n Name = " << name;
cout<< "\n Age = " << age;
cout<< "\n GPA = " << gpa;
}
};
int main()
{
student std[3];
fstream file;
file.open("std.dat", ios::out);
cout<< "\n Saving data for three students";
std[0].setdata("Ali",20,3.2);
file.write( ( char*) &std[0], sizeof(std[0]));
std[1].setdata("Babar",21,2.9);
file.write( ( char*) &std[1], sizeof(std[1]));
std[2].setdata("kamran",21,2.8);
file.write( ( char*) &std[2], sizeof(std[2]));
file.close();
cout<< "\n Data Saved";
cout<< "\n\n Reading data for three students";
file.open("std.dat", ios::in);
student view[3];
for(int i=0; i<3;i++){
file.read((char*) &view[i], sizeof(view[i]));
view[i].getdata();
cout<<"\n\n";
}
file.close();
}
