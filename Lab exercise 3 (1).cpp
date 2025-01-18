//Lab exercise 3
//LEE PEI YUAN A24CS0262
// 20/12/2024

#include <iostream>
using namespace std;
void dispStatus(int);
void getInput(int&,int&,int&,int&);
void dispOutput(int);
double calcAverage(int,int);
void dispStatus(int active_){
	if(active_>40){
		cout<<"RED ZONE"<<endl;}
		else if (active_<=40&&active_>20){
		cout<<"Orange zone"<<endl;}
		else if (active_<=20&&active_>0){
		cout<<"Yellow zone"<<endl;}
		else if (active_==0){
		cout<<"Green zone"<<endl;}
}
 
void getInput(int& total_case,int& total_death,int& new_cases,int& total_recovered){

	cout<<"Total cases:";
	cin>>total_case;
	cout<<"New cases:";
	cin>>new_cases;
	cout<<"Total death:";
	cin>>total_death;
	cout<<"Total recovered:";
	cin>>total_recovered;
}

void dispOutput(int active){
    	cout<<"Status :";
		dispStatus(active);

}

double calcAverage(int active_c,int count_d){
	double average=0;
	average=active_c/count_d;
	return average;
}
int main(){
	int count=0;int active_cases=0,total=0,h_active_cases,total_cases,new_cases,total_death,total_recovered;string state,h_state;
	double average_cases;bool pass=true;char loop;
	do{
		cout<<"<<<<<<<<<<<DATA>>>>>>>>>"<<endl;
		cout<<"State name :";
		getline(cin,state);
		getInput( total_cases,total_death,new_cases,total_recovered);
		cout<<"<<<<<<<<<<<SUMMARY>>>>>>>"<<endl;
		active_cases=total_cases+new_cases-total_death-total_recovered;
		cout<<"Active cases :"<<active_cases<<endl;
		 dispOutput(active_cases);
		if(active_cases>h_active_cases){
		h_active_cases=active_cases;
		h_state=state;}
		count++;
		total+=active_cases;
		cout<<"Press<ENTER> to continue...";
		cin.ignore();
		cin.get(loop);
		if(loop!='\n'){
		pass=false;}
	}while(pass==true);
	cout<<"<<<<<<<<<<ACTIVE CASES>>>>>>>>>\n";
	cout<<"Total   :"<<total<<endl;
	cout<<"Highest :"<<h_active_cases<<" ("<<h_state<<")\n";
	average_cases=calcAverage(total,count);
	cout<<"Average for "<<count<<" states : "<<average_cases;
}