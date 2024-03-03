//Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_salary
//- emp_city
//- emp_experience
//- emp_company_name

#include<iostream>
using namespace std;
class Employee
{
	public:
		int emp_id,emp_age,emp_salary,emp_experience;
		string  emp_name,emp_role, emp_city,emp_company_name;
		
		void in()
		{
			cout<<"Enter your ID :";
			cin>>emp_id;
			cout<<"Enter your NAME:";
			cin>>emp_name;
			cout<<"Enter your AGE :";
			cin>>emp_age;
			cout<<"Enter your Role :";
			cin>>emp_role;
			cout<<"Enter your city  :";
			cin>>emp_city;
			cout<<"Enter your Salary :";
			cin>>emp_salary;
			cout<<"Enter your Job experience :";
			cin>>emp_experience;
			cout<<"Enter your company name :";
			cin>>emp_company_name;
					cout <<endl;
		}
		

		
		void ot()
		
		{
			cout<<"ID NO  :"<<emp_id<<endl;
			cout<<"NAME :"<<emp_name<<endl;
			cout<<"AGE :"<<emp_age<<endl;
			cout<<"Role :"<<emp_role<<endl;
			cout<<"City :"<<emp_city<<endl;
			cout<<"Salry :"<<emp_salary<<endl;
			cout<<"Job Exprinace :"<<emp_experience<<endl;
			cout<<"Company name :"<<emp_company_name<<endl;
		}
};
int main()
{
	Employee e1;
  int i;
  for(i=0;i<2;i++)
  {
  		e1.in();
	    e1.ot();
  }
	return 0;
}
