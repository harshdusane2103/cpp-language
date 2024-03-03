/* Overload the `+` operator for the `Employee` class to add the salaries of two employees. 
Create two `Employee` objects and demonstrate the use of the overloaded `+` operator to calculate and display
 the total salary.

*/
#include<iostream>
using namespace std;
class Employee
{
	int salary;
	int totalsalary;
	public:
	void employeeset()
	{
		cout<<"Enter salary:";
		cin>>salary;
	}
	void get()
	{
		cout<<"Total Salry :"<<totalsalary;
	}
	Employee operator+(Employee&e2)
	{
		Employee temp;
		totalsalary=e1.salary+e2.salary;
		temp.e2=totalsary;
		return 0;
	}
};

int main()
{
	
	Employee e1,e2;
	e1.employeeset();
	e1.employeeset();
	totalsalary=e1.e2;
	return 0;
}
