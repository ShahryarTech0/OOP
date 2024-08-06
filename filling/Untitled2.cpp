#include<fstream>
#include<iostream>
using namespace std;
int main(){
	char ch;
	ifstream fin;
	fin.open("Myfile.txt");
	ch=fin.get();
	while(!fin.eof()){
		cout<<ch;
		ch=fin.get();
	}
	
}
