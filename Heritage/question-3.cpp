#include<iostream>
using namespace std;
class A
{
	protected:
		int age,bob;
		string name,city;
		public:
			void input()
			{
				
			           cout<<"Enter age :";
			           cin>>age;
			           cout<<"Enter the Birth Date :";
			           cin>>bob;
			           cout<<"Enter the name : ";
			           	cin.ignore();
			           getline(cin,name);
			
		           cout<<"Enter the city :";
		           cin.ignore();
		           getline(cin,city);
			}
};
class B:public A
{
	protected:
			string email;
	public:
	void set()
	{
		            input();
					cout<<"Enter the Email ";
						cin.ignore();
					getline(cin,email);
	}
	
};
class Cut:public B
{
	protected:
		string role;
		void get()
		{
			 set();
			cout<<"enter role :";
				cin.ignore();
				getline(cin,role);
		}
	   public:	
	void getter()
	{
		
	    
			cout<<"Name :"<<name<<endl;
			cout<<"Brith Date :"<<bob<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"City :"<<city<<endl;
			cout<<"Email:"<<email<<endl;
	        cout<<"Role : "<<role	;
	}
};
int main()
{
	
	Cut c1;
	c1.set();
	c1.getter();

	return 0;
}