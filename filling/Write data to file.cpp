#include<fstream>
#include<iostream>
using namespace std;
int main()
{
ofstream fout;
fout.open("newfile.txt");
fout<<"test ";
char name[30];
int age;
cout<<"Enter name"<<endl;
cin>> name;
fout<<name<<"\n";
fout.close();
}
