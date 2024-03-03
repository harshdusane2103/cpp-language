

#include<iostream>
using namespace std;

class X
{
	public:
	int a,b,c;
};
class Y :public X
{
	public:
		int cube;
	void setdata()
	{
		cout<<"Enter the A  :  ";
		cin>>a;
		cout<<"Enter the B :";
		cin>>b;
		cout<<"Enter the c:";
		cin>>c;
	
	}
	void getdata()
	{
	    cube=(a*a*a)+(b*b*b)+(c*c*c);
	    cout<<"Sum ="<<cube;
	}
};
int main()
{
	Y y1;
	y1.setdata();
	y1.getdata();
	return 0;
}
