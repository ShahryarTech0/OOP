#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
fstream file;
char str[100];
int len,i;
 char ch;
file.open ("textFile.txt", ios::out);
cout<<"Enter any string data: " ;
cin>> str;
file<<str;
file.close();
file.open ("textFile.txt",ios::in );
cout<<"\n \n Reading data from the file\n\n";
for(i=0;i<100;i++){
	file.put(str[i]);s
}
cout<<str;
file.close();
}
//fstream file;
//char str[100];
//int len;
//Cout<<“Enter any string data: ”;
//Cin>> str;
//Len=strlen(str);
//File.open (“textFile”, ios::out | ios::in );
//For(int i=0; i<len;i++){
//file.put(str[i]) ; }
//File.seekg(0);
//Char ch;
//Cout<<“\n \n Reading data from the file\n\n”);
//While(file){
//file.get(ch);
//cout<<ch;
//}
//File.close();
//}
