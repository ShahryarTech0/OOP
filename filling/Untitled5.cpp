#include<fstream>
#include<iostream>
using namespace std;
int main(){
	fstream file;
	file.open("micre.txt",ios::out|ios::app);
	string name[100],ch;
	int age;
	file<<"TXTXT ";
	cout<<"Enter name"<<endl;
	cin>>name;
	cout<<"Enter age"<<endl;
	cin>>age;
	file<<name<<endl;
	file<<age<<endl;
	file.close();
	file.open("micre.txt",ios::in|ios::app);
	ch=file.get();
	cout<<ch;
	while(!file.eof()){
		ch=file.get();
		cout<<ch;
	}
	cout<<endl;
	file.close();
	
	
	
}
