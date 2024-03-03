#include<iostream>
using namespace std;
class phone
{
   int cust_id,cust_age, cust_mobile_number;
   string  cust_name,cust_city,cust_simcard_validity, cust_telecom_brand_name,line ;
   public:
   	void recoed()
   	{
   		cout<<"Enter your coustemer ID :";
   		cin>>(cust_id);
   	     getline(cin,line);
   		cout<<"Enter your name :";
   		getline(cin,cust_name);
   		cout<<"Enter your city:";
   		getline(cin,cust_city);
   		cout<<"Enter your Sim card validity :";
   		getline(cin,cust_simcard_validity);
   		cout<<"Enter your telecom brand name:";
   		getline(cin,cust_telecom_brand_name);
   	
   		cout<<"Enter your age:";
   		cin >>cust_age;    
		cout<<"Enter your phone number:";
   		cin >>cust_mobile_number;                                  
   		cout<<endl ;
	}
	void out()
	{
		cout<<"ID No :"<< cust_id<<endl;
		cout<<" Couster Name :"<<cust_name<<endl;
		cout<<"Age :"<<cust_age<<endl;
		cout<<"Company name:"<<cust_telecom_brand_name<<endl;
		cout<<"moblie number:"<<cust_mobile_number<<endl;
	    cout<<"sim card validaity :"<<cust_simcard_validity<<endl;
		cout<<"city:"<<cust_city<<endl;
		cout<<endl;
	}
   	
};

int main()
{
	phone p1;
	int i;
	for(i=0;i<2;i++)
	{
		p1.recoed();
	}
	
	
	for(i=0;i<2;i++)
	{
		p1.out();
	}
	return 0;
}
