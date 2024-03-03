#include<iostream>
using namespace std;

class Maximum
{
	int a,b;
	public:
		void set()
		{
			cout<<"Enter the A:";
			cin>>a;
			cout<<"Enter the B:";
			cin>>b;
		}
		void get()
		{
			if(a>b)
			{
			   cout<<"A is maximum ";
			   
			}
			else
			{
				cout<<"B is maximum ";
			}
		}
		Maximum operator<(Maximum&m2)
		{
			Maximum temp;
			int c=this->a>m2.a;
			int d=this->b>m2.b;
			temp.a=c;
			temp.b=d;
			return temp;
		}
	
};
int main()
{
	Maximum m1,m2,m3;
	m1.set();
	m1.set();
	m3=m1<m2;
	m3.get();
	return 0;
}
