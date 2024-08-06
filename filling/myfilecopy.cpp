#include<iostream>
#include<fstream>
#include<string.h>
void copyfile(char *f1,char *f2);
int main(){
	copyfile("myfile.txt","myfilecopy.txt");
}
void copyfile(char *f1,char *f2){
	ifstream fin;
	ofstream fout;
	char ch;
	fin.open(f1);
	fout.open(f2);
	ch=fin.get();
	while(fin.eof()){
		cout<<ch<<endl;
		ch=fin.get();
	}
	fin.close();
	fout.close();
}
