//NAME:LEE PEI YUAN
//MATRIC NUMBER:A24CS0262
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void getSize(string,int&);
void readFile(string,double [],int&);
void computeC(const double[],double[],int&);
double average(const double[],int&);
char grade(double);
void writeFile(const double [],const double [],const char[],int&);

int main() {
	string file="input_LE4.txt";
	int size=0;
	int num_H=0,num_M=0,num_L=0;
	double Average=0;
	getSize(file,size);
    char Grade[size];
	double Fahrenheit[size];
	readFile(file,Fahrenheit,size);
	double Celcius[size];
	computeC(Fahrenheit,Celcius,size);
	Average=average(Celcius,size);
    for(int count=0; count<size; count++) {
    	Grade[count]=grade(Celcius[count]);
		if(Grade[count]=='H'){
		num_H++;}
		else if (Grade[count]=='M'){
		num_M++; }
		else if(Grade[count]=='L'){
		num_L++; }
		}
		writeFile(Celcius,Fahrenheit,Grade,size);
		cout<<"Average of the temperature in Celcius: "<<fixed<<setprecision(1)<<Average<<endl;
		cout<<"Number of high temperature: "<<num_H<<endl;
		cout<<"Number of medium temperature: "<<num_M<<endl;
		cout<<"Number of low temperature: "<<num_L<<endl;
	
		return 0;
}

void getSize(string file_name,int& size) {
	double test;
	ifstream infile(file_name);
	if(!infile.is_open()) {
		cout<<"Error,the file cannot open!"<<endl;
		exit(1);
	}
	while(!infile.eof()) {
		infile>>test;
		size++;
	}
	cout<<"Number of data :"<<size<<endl;
	infile.close();
}

void readFile(string file_name,double Fe[],int& size) {
	ifstream infile(file_name);
	cout<<"Reading information from the file......"<<endl;
	if(!infile.is_open()) {
		cout<<"Error,the file cannot open!"<<endl;
		exit(1);
	}
	for(int count=0; count<size; count++) {
		infile>>Fe[count];
	}
	infile.close();
}

void computeC(const double Fe[],double Ce[],int& size) {
	for(int count=0; count<size; count++) {
		Ce[count]=(5.0/9.0)*(Fe[count] - 32);
	}

}

double average(const double Ce[],int& size) {
	double a_verage=0;
	for(int count=0; count<size; count++) {
		a_verage+=Ce[count];
	}
	a_verage/=size;
	return a_verage;
}

char grade(double Ce){
	char Grade;
		if(Ce>=35)
		Grade='H';
		else if(Ce>=20)
		Grade='M';
		else
		Grade='L';
 return  Grade;	
}
 void writeFile(const double Ce[],const double Fe[],const char g_rade[],int& size){
 	ofstream outfile("Temperature.txt");
	if(!outfile.is_open()) {
		cout<<"Error,the file cannot open!"<<endl;
		exit(1);
	}
		outfile<<setw(15)<<"C(Celcius)"<<setw(20)<<"F(Fahrenheit)"<<setw(21)<<"Description"<<endl;
		outfile<<setw(15)<<"=========="<<setw(20)<<"============="<<setw(21)<<"==========="<<endl;
		for(int count=0; count<size; count++) {
		outfile<<fixed<<setprecision(2)<<setw(13)<<Ce[count]<<setw(17)<<fixed<<setprecision(2)<<Fe[count]<<setw(21)<<g_rade[count]<<endl;}	
		
		outfile.close();
 }

