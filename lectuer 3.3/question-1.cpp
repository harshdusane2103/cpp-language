#include<iostream>
using namespace std;
class company 
{
     int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds; 
	 string comp_name,comp_ceo;
	 public:
     company(int id,int staff,int revenue,int import,int expor,string name,string ceo )
	 { 
	           comp_id=id;
               comp_name=name;
               comp_staff_quantity=staff;
				 comp_revenue =revenue;
				comp_import_raw_diamonds=import; 
				comp_export_diamonds =expor;
				comp_ceo =ceo;
	}
	
	void output()
	{
	   cout<<"  "<<endl;
	    cout<<"company ID NO :"<<comp_id<<endl;
		
		cout << "Company Name: "<<comp_name<<endl;
		
        cout<<" company Staff quanitiy :"<<comp_staff_quantity<<endl;
		
		cout<<"company Revenue of year :"<<comp_revenue<<"CR"<<endl;
		
		cout<<" company one year Import:"<<comp_import_raw_diamonds<<"CR"<<endl;
	
		cout<<"Enter comoany one year export:"<<comp_export_diamonds<<"CR"s<<endl;
		
		cout << "Company Ceo Name: "<<comp_ceo<<endl;
       
	
	}	  	
};
int main()
{
	int i,n;
	cout<<"Enter company deletis you to print enter number :";
	cin>>n;
	for(i=0;i<n;i++)
	{
		int id , staff,revenue,import,expor;
		string name ,ceo ;
		cout<<"Enter company ID NO :";
		cin>>id;
		cout << "Company Name: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter company Staff quanitiy :";
		cin>>staff;
		cout<<"Enter company Revenue of year :";
		cin>>revenue;
		cout<<"Enter company one year Import:";
		cin>>import;
		cout<<"Enter comoany one year export:";
		cin>>id;
		cout << "Company Ceo Name: ";
        cin.ignore();
        getline(cin, ceo);
        
        company com( id , staff,revenue,import,expor,name ,ceo );
		
        com.output();
	}

	return  0;
}