#include<iostream>
using namespace std;

class Sub
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
	    Sub operator-(Sub &s2)
		{
		
		     Sub temp;
		     
		     int c=this->a-s2.a;
		     int  d=this->b-s2.b;
		   temp.a=c;
		   temp.b=d;
	        return temp;
		}
	
};
int main()
{
    
   Sub s1,s2,s3;
   s1.set();
   s2.set();
   s3=s1-s2;
   s3.get();
	return 0;
}