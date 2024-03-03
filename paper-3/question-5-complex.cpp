#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
	void set()
	{
		cout<<"Enter the A :";
		cin>>a;
		cout<<"Enter the B:";
		cin>>b;
	}
	void get()
	{
		cout<<a<<"+"<<b<<"j"<<endl;
	}
		Complex operator -(Complex&c2)
	{
		Complex temp;
		temp.a=this->a-c2.a;
		temp.b=this->b-c2.b;
		return temp;
	}
};
int main()
{
	Complex c1,c2,c3;
	c1.set();
	c2.set();
	c1.get();
	c2.get();
	c3=c1-c2;
	c3.get();

    return 0;
}
