#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
fstream file;
file.open("newfile.txt",ios::out);
file<<"test ";
char str[30];
int age;
char name;
cout<<"Enter name"<<endl;
cin>> str;
file<<str<<"\n";
cout<<"Enter age"<<endl;
cin>> age;
file<<age<<"\n";
file.close();
file.open("newfile.txt",ios::in); 
   name=file.get();
	cout<<name;
	while(!file.eof()){
		name=file.get();
		cout<<name;
	}
	cout<<endl;
	file>>age;
	cout<<age;
	file.close();
	file.close();
}
