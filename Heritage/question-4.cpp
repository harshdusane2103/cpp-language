#include<iostream>

using namespace std;
class A
{
	protected:
		int id;
		string name,role,line;
		void input()
		{
			cout<<"Enter the Name  :";
			cin.ignore();
			getline(cin,name);
			cout<<"Enter the Role :";
			getline(cin,role);
			cout<<"Enter the ID  : ";
			cin>>id;
		}
};
class B:public A
{
	protected:
		int salary,experience;
		public:
		void input1()
		{
			input();
			cout<<"Enter salry:";
			cin>>salary;
			cout<<"Enter job exprince  :";
			cin>>experience;
		}
		
	
};
class C:public B
{
	protected :
		string comp_name,address;
		public:
			void input2()
		    {
		    	input1();
		    	cout<<"Enter  company Name:";
		    	cin.ignore();
			   getline(cin,comp_name);
			      cout<<"Enter Address:";
			     getline(cin,address);
			}
			void get1()
			{
					
				cout << "Name : " << name << endl;
				cout << "Role : " << role << endl;
				cout << "Salary : " << salary << endl;
		
			}
	
};
class D:public C
{
	protected:
		string email;
		int contect;
		public:
		void input3()
		{
			input2();
			cout<<"Enter contect:";
			cin>>contect;
			cout<<"Enter Email  :";
			cin.ignore();
			getline(cin,email);
			cout<<endl;
			
		}
		void get2()
		{
			cout<<endl;
			
			cout<<"ID :"<<id<<endl;
			 get1();
			cout << "Experience : " << experience << endl;
			cout << "Company Name : " << comp_name << endl;
			cout << "Address : " << address << endl;
			cout << "Email : " << email <<endl;
			cout << "Conatct : " << contect << endl;

        			
		}
};


int main()
{   
    D d1;
    d1.input3();
    d1.get2();
   return 0;	
}