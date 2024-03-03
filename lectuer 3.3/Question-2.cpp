//Q.2 Write a Program to get and display N numbers of Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
//- cafe_id
//- cafe_name
//- cafe_type (like a rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity

#include<iostream>
using namespace std;
class food
{   int cafe_id,cafe_rating , cafe_establish_year,cafe_staff_quantity;
    string  cafe_name, cafe_type ,cafe_location;
	public:
	food(int id,int rating,int year,int staff,string name,string type,string location)
	{
		cafe_id=id;
		cafe_rating=rating;
		 cafe_establish_year=year;
		 cafe_staff_quantity=staff;
		 cafe_name=name;
		 cafe_type=type;
		 cafe_location=location;
		 
	}
	void foodoutput()
	{
		cout<<"   "<<endl;
		cout<<"Cafe Name:"<< cafe_name <<endl;
		cout<<"Cafe ID:"<<   cafe_id<<endl;
		cout<<"Cafe Establish Year:"<<   cafe_establish_year <<endl;
		cout<<"Cafe Staff quantity :"<<	 cafe_staff_quantity  <<endl;
		cout<<"Cafe Type:"<< 	 cafe_type <<endl;
		cout<<"Cafe Rating:"<<	cafe_rating  <<endl;
		cout<<"Cafe Location:"<<  	 cafe_location<<endl;
	}
};
int main()
{  
    int i,n;
    cout<<"Enter thwe number which data you want to print :";
    cin>>n;
    for(i=0;i<n;i++)
    {
    	int id,rating,year,staff;
    	string name,type,location,line;
    	cout<<"Enter ID NO :";
    	cin>>id;
    	cin.ignore();
    	cout << "Enter cafe name :";
    	getline(cin,name);
    		cout << "Enter cafe type :";
    	getline(cin,type);
    		cout << "Enter cafe location :";
    	getline(cin,location);
    		cout<<"Enter Eastbiase year :";
    	cin>>year;
    		cout<<"Enter staff quantity  :";
    	cin>>staff;
    		cout<<"Enter Rating :";
    	cin>>rating;
    	
    	food ff(id,rating,year,staff,name,type,location);
    	ff.foodoutput();
    	
    	
	}
	return 0;
}
