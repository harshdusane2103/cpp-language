#include<iostream>
using namespace std;
class A
{
	protected:
		int age,bob;
		string name,city;
      void asetter()
      {
           cout<<"Enter age :";
           cin>>age;
           cout<<"Enter the Birth Date :";
           cin>>bob;
           cout<<"Enter the name : ";
           getline(cin,name);
           cout<<"Enter the city :";
           getline(cin,city);

	  }
};
class B:public A
{
	protected:
	void bsetter()
	{
			string email;
		cout<<"Enter the Email ";
		getline(cin,email);
	}
};
class C:public A,public B
{
	public:
	void getter()
	{
		asetter();
		bsetter();
		void
	}
};
int main()
{
	Squre s;
	Cube c;
	s.squre();
	c.cube();

	return 0;
}
