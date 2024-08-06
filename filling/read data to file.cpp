#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream fin;
	fin.open("myfile.txt");          
	char name;
	int age;
	name=fin.get();
	cout<<name;
	while(!fin.eof()){
		name=fin.get();
		cout<<name;
	}
	cout<<endl;
	fin>>age;
	cout<<age;
	fin.close();	
	//End of file coding 
	while(!fin.eof())
	
	//file not found coding
	if(!fin)
	
	ifstream inf(“test”);
inf>> name;
cout<<“Name = ”<< name <<“\n”;
inf>> age;
cout<<“Age= ”<< age<<“\n”;
inf.close();
}
