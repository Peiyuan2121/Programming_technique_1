//LEE PEI YUAN A24CS0262
//HONG JIA BAO A24CS0251
//DATE: 28/12/2024
#include <iostream>
using namespace std;

int getCar(int&);
int getVariants(int&, int, string& ) ;
int getInput(int&, string&);
void carInfo(int, int ,int, float& ,string,string);
double calc_loan(float);




int main ()
{
	int model,variants,region;
	string car=" ",paint;
	float price, installment;
	char repeat;
	
	
	do{
	cout<<"Proton Car Loan Calculator "<<endl;
	getCar(model);
	getVariants(variants, model,car);
	getInput(region, paint);
	carInfo(model, variants, region, price, car,paint);
	installment=calc_loan(price);
	cout<<"MONTHLY INSTALLMENT (MYR) : ";
	cout<<installment<<endl;
	
	cout<<"Do you want to enter other data? [Y @ N]:";
	cin>>repeat;
	cout<<endl;
	}while((repeat=='Y')||(repeat =='y'));
	cout<<"THANK YOU :)";
	
	return 0;
}

int getCar(int& model)
{
	do{
	cout<<"Model [1-X70, 2-X50, 3-Persona]: ";
	cin>>model;
	cout<<"\n";
	}while((model!=1)&&(model!=2)&&(model!=3));	
}

int getVariants(int& variants, int model, string& car )
{
	if(model==1)
	{
		cout<<"Variants [1-1.5TGDi Standard, 2-1.5TGDi Executive , 3-1.5TGDi Premium , 4-1.5TGDi Premium X]: ";  
		cin>>variants;
		cout<<"\n";
		car="X70";
		while ((variants!=1)&&(variants!=2)&&(variants!=3)&&(variants!=4))
		{
			cout<<"Variants [1-1.5TGDi Standard, 2-1.5TGDi Executive , 3-1.5TGDi Premium , 4-1.5TGDi Premium X]: ";  
		cin>>variants;
			cout<<"\n";
		}
	}
	
	else if (model==2)
	{
		cout<<"Variants [1-1.5T Standard, 2-1.5T Executive , 3-1.5T Premium , 4-1.5TGDi Flagship]:";
		cin>>variants;
		cout<<"\n";
		car="X50";
		
		while ((variants!=1)&&(variants!=2)&&(variants!=3)&&(variants!=4))
		{
		cout<<"Variants [1-1.5T Standard, 2-1.5T Executive , 3-1.5T Premium , 4-1.5TGDi Flagship]:";
		cin>>variants;
		cout<<"\n";
		}
	}
	
	else if (model==3)
	{
		cout<<"Variants [1-1.6L Standard CVT, 2-1.6L Executive CVT, 3-1.6L Premium CVT]:";
		cin>>variants;
		cout<<"\n";
		car="Persona";
			while ((variants!=1)&&(variants!=2)&&(variants!=3))
		{
		cout<<"Variants [1-1.6L Standard CVT, 2-1.6L Executive CVT, 3-1.6L Premium CVT]:";
		cin>>variants;
		cout<<"\n";
		}
	}
	
}

int getInput(int& region, string& paint)
{   int paint_type;
	cout<<"Region [1-Peninsular Malaysia, 2-East Malaysia]:";
	cin>>region;
	cout<<"\n";
		while ((region!=1)&&(region!=2))
		{
		cout<<"Region [1-Peninsular Malaysia, 2-East Malaysia]:";
		cin>>region;
		cout<<"\n";
		}
		
		cout<<"paint type (1-Solid/ 2-Metallic):";
		cin>>paint_type;
		while ((paint_type!=1) &&(paint_type!=2))
		{
			cout<<"paint type (1-Solid/2-Metallic):";
			cin>>paint_type;
		}
		switch(paint_type){
			case 1:paint="Solid";break;
			case 2:paint="Metallic";break;
		}
		
}

void carInfo(int model, int variants, int region,float& price, string car,string paint)
{
	cout<<"Car Info"<<endl;
	cout<<"model :"<<car<<endl;
	
	if (model==1){
	
	switch(variants)
	{
		case 1 : cout<<"Variant : 1.5TGDi Standard "<<endl;
				break;
		case 2 :cout<<"Variant : 1.5TGDi Executive "<<endl;
				break;
		case 3 : cout<<"Variant : 1.5TGDi Premium "<<endl;
				break;
		case 4 : cout<<"Variant : 1.5TGDi Premium X "<<endl;
				break;
		
		
	}
}
	else if (model==2)
	{
		switch(variants)
		{
			case 1 : cout<<"Variant : 1.5T Standard "<<endl;
				break;
			case 2 :cout<<"Variant : 1.5T Executive "<<endl;
				break;
			case 3 : cout<<"Variant : 1.5T Premium "<<endl;
				break;
			case 4 : cout<<"Variant : 1.5TGDi Flagship "<<endl;
				break;
			
		}
	}
	
	else if (model==3)
	{
		switch(variants)
		{
			case 1 : cout<<"Variant : 1.6L Standard CVT "<<endl;
				break;
			case 2 :cout<<"Variant : 1.6L Executive CVT"<<endl;
				break;
			case 3 : cout<<"Variant : 1.6L Premium CVT "<<endl;
				break;

		}
	}
	
	cout<<"Region :";
	if (region==1)
	{
		cout<<"Peninsular Malaysia"<<endl;
	}
	else if (region==2)
	{
		cout<<"East Malaysia"<<endl;
	}
	
	cout<<"Paint type : "<<paint<<endl;
	
	if(model==1)
	{
		if (variants==1)
		{
			if (region==1)
			{
				cout<<" Price: RM 98800.00"<<endl;
				price=98800.00;
			}
			else if (region==2)
			{
				cout<<"Price: RM 100800.00 "<<endl;
				price=100800.00;
			}
		}
		else if (variants==2)
		{
			if (region==1)
			{
				cout<<" Price: RM 110800.00"<<endl;
				price=110800.00;
			}
			else if (region==2)
			{
				cout<<"Price: RM 112800.00 "<<endl;
				price=112800.00;
			}	
		}
		else if (variants==3)
		{
			if (region==1)
			{
				cout<<" Price: RM 123800.00"<<endl;
				price=123800.00;
			}
			else if (region==2)
			{
				cout<<"Price: RM 125800.00 "<<endl;
				price=125800.00;
			}
		}
		else if (variants==4)
		{
			if (region==1)
			{
				cout<<" Price: RM 126800.00 "<<endl;
				price=126800.00;
			}
			else if (region==2)
			{
				cout<<"Price: RM 128800.00 "<<endl;
				price=128800.00;
			}
		}
	}
	
	else if (model==2)
	{
		if (variants==1)
		{
			if (region==1)
			{
				cout<<" Price: RM 86300.00"<<endl;
				price=86300.00;
			}
			else if (region==2)
			{
				cout<<"Price: RM 88300.00 "<<endl;
				price=88300.00;
			}
		}
		else if (variants==2)
		{
			if (region==1)
			{
				cout<<" Price: RM 93300.00"<<endl;
				price=93300.00;
			}
			else if (region==2)
			{
				cout<<"Price: RM 95300.00 "<<endl;
				price=95300.00;
			}	
		}
		else if (variants==3)
		{
			if (region==1)
			{
				cout<<" Price: RM 101800.00"<<endl;
				price=101800.00;
			}
			else if (region==2)
			{
				cout<<"Price: RM 103800.00 "<<endl;
				price=103800.00;
			}
		}
		else if (variants==4)
		{
			if (region==1)
			{
				cout<<" Price: RM 113300.00 "<<endl;
				price=113300.00;
			}
			else if (region==2)
			{
				cout<<"Price: RM 115300.00 "<<endl;
				price=115300.00;
			}
		}
	}
	
	else if (model==3)
	{
		if (variants==1)
		{
			if (region==1)
			{
				cout<<" Price: RM 47800.00"<<endl;
				price=47800.00;
			}
			else if (region==2)
			{
				cout<<"Price: RM 49800.00 "<<endl;
				price=49800.00;
			}
		}
		else if (variants==2)
		{
			if (region==1)
			{
				cout<<" Price: RM 53300.00"<<endl;
				price=53300.00;
			}
			else if (region==2)
			{
				cout<<"Price: RM 55300.00 "<<endl;
				price=55300.00;
			}	
		}
		else if (variants==3)
		{
			if (region==1)
			{
				cout<<" Price: RM 58300.00 "<<endl;
				price=58300.00;
			}
			else if (region==2)
			{
				cout<<"Price: RM 60300.00 "<<endl;
				price=60300.00;
			}
		}
	}
}

double calc_loan(float price){
	int pay;double interest;int years;int balance=0;
	double monthly=0;double loan=0;
	cout<<"Down Payment (MYR) :";
	cin>>pay;
	cout<<"Interest Rate (%) :";
	cin>>interest;
	cout<<"Repayment period (in years) :";
	cin>>years;
	cout<<endl;
	
	balance=price-pay;
	loan=(interest/100)*years*balance;
	monthly=(balance+loan)/(years*12);
	return monthly;
}
	
	
	
	





