#include<fstream>
#include<iostream>
using namespace std;
int main(){
fstream fout;
fout.open("myyfile.txt");
fout<<"test";
char name[30],n;
int age;
cout<<"Enter name"<<endl;
cin>> name;
//fout<<name<<"\n";
cout<<"Enter age"<<endl;
cin>> age;
fout<<age<<"\n";
fout.close();
fout.open("myyfile.txt");          
	
	n=fout.get();
	cout<<n;
	while(!fout.eof()){
		n=fout.get();
		cout<<n;
	}
	cout<<endl;
	fout>>age;
	cout<<age;
	fout.close();
}
