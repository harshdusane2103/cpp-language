#include<iostream>
using namespace std;
class A
{
	protected:
		int a=10;
};
class B
{
		protected:
		int a=20;
};
class C:public A,public B
{
	public:
		void print()
		{
			cout<<"A:"<<A ::a<<endl;
			cout<<"B :"<<B::a<<endl;
		}
};
int main()
{
	C c;
	c.print();
	
	
	
	
	
	return 0;
}
