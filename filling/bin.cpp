#include<fstream>
#include<iostream>
using namespace std;
int main()
{
ofstream fout;
fout.open("filee.txt");
fout<<"test "<<endl;
char name[30];
int age;
cout<<"Enter name"<<endl;
cin>> name;
fout<<name<<"\n";
cout<<"Enter age"<<endl;
cin>> age;
fout<<age<<"\n";
fout.close();
}
