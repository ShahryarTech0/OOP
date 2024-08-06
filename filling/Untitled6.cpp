#include<fstream>
#include<iostream>
using namespace std;
int main(){
	fstream file;
file.open("binary.txt",ios::out);
float arry[5]={52.5,60.7,38.2,59.4,75.6};
int i;
file.write( ( char*) &arry, sizeof(arry));
for(i=0;i<5;i++){
	file<<arry[i];
}
file.close();
file.open ("binary.txt", ios::in);
file.read((char*) &arry, sizeof(arry));
for(int i=0; i<5;i++){
cout<<arry[i]<<endl; 
}
file.close();
}
