#include<iostream>
using namespace std;

class Math
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
		     	cout<<" A:"<<a<<endl <<"B ="<<b;
		}
	   Math operator+(Math &m2)
		
		{
		   Math temp ;
		   int x=this->a+m2.a;
		   int y= this->b+m2.b;
		   temp.a=x;
		   temp.b=y;
	        return temp;
		}
	
};
int main()
{
    
 Math m1,m2,m3;
 m1.set();
 m2.set();
 m3=m1+m2;
 m3.get();
	return 0;
}