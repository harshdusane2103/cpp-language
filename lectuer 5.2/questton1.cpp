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
//			cout<<"Enter the B:";
//			cin>>b;
		}
		void get()
		{
			if(a>0)
			{
			   cout<<"m1 is maximum ";
			   
			}
			else
			{
				cout<<"m2 is maximum ";
			}
		}
		Maximum operator<(Maximum&m2)
		{
			Maximum temp;
			int c=m2.a>this->a;
			temp.a=c;
//			int d=this->b>m2.b;
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
