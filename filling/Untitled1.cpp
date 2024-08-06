ofstream fout;
fout.open("",ios::app|ios::binary)
fout.write((char *)this,sizeof(*this))
fout.close();

ifstream fin;
fin.open((char *)this,sizeof(*this))
if(!fin){
	
}
fin.read((char *)this,sizeof(*this))
while(!fin.eof()){
	set()
	fin.read((char *)this,sizeof(*this))
}
fin.close();


void update(char *t)
fstream file;
file.open("",ios::out|ios::in|ios::app|ios::binary)
file.seekg(0);
file.read((char *)this,sizeof(*this))
while(file.eof()){
	if(!strcmp(t,name)){
		set()
		file.seekp(file.tellp()-sizeof(*this))
		file.write((char *)this)
	}
	
}
