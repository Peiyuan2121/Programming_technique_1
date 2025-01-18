//LEE PEI YUAN A24CS0262

#include <iostream>
using namespace std;
int main()
{
	int sum,num,digit;char y;
	do {
	a:
	sum=0;
	cout<<"Please enter an integer number.\n";
	cin>>num;
	if(num>0){ 
	   cout<<"valid\n"; }
	else {
	     cout<<"invalid,enter an integer number>0.\n";goto a;}
	  do {
	  	digit=num%10;
	  	num=num/10;
	  	sum=sum+digit;
	   if(num==0){
	   	cout<<digit<<"="<<sum<<endl;}
	   	else{
	   		cout<<digit<<"+";
		   }
	   
	   } while(num>0);
	  
	   if(sum%2==0)
	   { cout<<sum<<" is even number.\n";
	   } else{ 
	   cout<<sum<<" is odd number.\n";
	   }
	   if (sum&5==0){
	  	cout<<sum<<"multiple of 5.\n";
	  }
	  else if (sum%5==0&&sum%4==0){
	  	cout<<sum<<"is multiple of 4 and 5.\n";
	  }else if(sum%4==0){
		cout<<sum<<"is multiple of 4.\n";}
		else if(sum%3==0){
		cout<<sum<<" is multiple of 3.\n";}
		else if(sum%3==0&& sum%4==0){
		cout<<sum<<" is multiple of 3 and 4.\n";}
		else if(sum%3==0&& sum%5==0){
		cout<<sum<<" is multiple of 3 and 5.\n";}
		else if(sum%3==0&& sum%5==0&&sum%3==0){
		cout<<sum<<" is multiple of 3,4 and 5.\n";}
		
	cout<<"Repeat the calculation please press 'Y' OR press 'N'to terminate the process.\n";
	  cin>>y;}
	 while(y=='Y');
return 0;

}