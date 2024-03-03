/*Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has the following members:
company_name
manager_salary
employee_salary
total_staff
total_annual_revenue
can_terminate
- use all attributes accessibility in the parent class and child class properly.
- override a method myAccess() in both child classes to display all parent class members' values accordingly.*/

#include<iostream>
using namespace std;

class Admin
{
	protected:
		string company_name,can_terminate;
		int manager_salary,employee_salary,satff,total_annual_revenue;
		void set()
		{
			cout<<"Enter the Company name :";
			cin>>company_name;
			cout<<"Enter manager salary :";
			cin>>manager_salary;
			cout<<"Enter employe salary:";
			cin>>employee_salary;
			cout<<"Enter the satff :";
			cin>>satff;
			cout<<"Enter the Annual Revenue :";
			cin>>total_annual_revenue;
			cout<<"Can you terminate anyone (yes or no):";
			cin>>can_terminate;
		}
		void get()
		{
			cout<<" Company name :"<<company_name<<endl;
			cout<<"Manager salary :"<<manager_salary<<endl;
			cout<<" Employe salary:"<<employee_salary<<endl;
			cout<<" satff :"<<satff<<endl;
			cout<<" Annual Revenue :"<<total_annual_revenue<<endl;
			cout<<"Can you terminate anyone (yes or no):"<< can_terminate<<endl;
		}
};
class Manager:public Admin
{
	 public:
	 	void MyAccess()
	 	{
	 		set();
	 		cout<<"              "<<endl;
	 		get();
	 		
		 }
	
};
class Employee:public Admin
{
	 public:
	 	void MyAccess()
	 	{
	 		cout<<"              "<<endl;
	 		set();
	 		cout<<"              "<<endl;
	 		get();
	 		
		 }
	
};
int main()
{
	Manager m1;
	m1.MyAccess();
	Employee e1;
	e1.MyAccess();
	return 0;
}
