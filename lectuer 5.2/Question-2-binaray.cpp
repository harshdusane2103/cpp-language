#include<iostream>
using namespace std;

class Unaray
{
	int a;
	public:
		void set()
		{
			cout<<"Enter the A:";
			cin>>a;
			
		}
		void get()
		{
		     	cout<<" A:"<<a;
		}
	Unaray operator++(int)
		{
		    Unaray temp=*this;
			a++;
	        return temp;
		}
	
};
int main()
{
    Unaray u1,u2;
	u1.set();
    u2.set();
    u1++;
    u2++;
    u1.get();
	u2.get();
	return 0;
}