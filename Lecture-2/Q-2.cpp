

#include<iostream>
using namespace std;
class car
{
	public:
	int car_id, car_release_year;
	string car_company_name, car_color,car_model;
	void take()
	{
		    cout<<"Enter your ID :";
			cin>>car_id;
			cout<<"Enter your car company name :";
			cin>>car_company_name;
			cout<<"Enter your color :";
			cin>>car_color;
			cout<<"Enter your Model :";
			cin>>car_model;
			cout<<"Enter your car release year  :";
			cin>>car_release_year;
		
	}
	void out()
	{
			cout<<" Car ID NO  :"<<car_id<<endl;
			cout<<"Car NAME :"<<car_company_name<<endl;
			cout<<" color:"<<car_color<<endl;
			cout<<" Model:"<<car_model<<endl;
			cout<<" car release year :"<<car_release_year<<endl;
	}
	
};
int main()
{
	car c1;
	for(int i=0;i<4;i++)
	{
		c1.take();
		c1.out();
	}
	return 0;
}
