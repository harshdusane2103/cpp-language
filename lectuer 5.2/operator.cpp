#include<iostream>
using namespace std;
class Math
{
	int  num1;
	public:
		void set()
		{
			cout<<"Enter the Number:";
			cin>>num1;
	
		}
		void get()
		{
			cout<<"First ="<<num1<<endl;
		
			
		}
		bool operator ==(Math &m2)
		{
		
			if(num1==num1)
			{
				return true;
			}
			else
			{
				return false;
			}
			
		}
};
int main()
{
	Math m1,m2;
	m1.set();
	m2.set();
	if(m1==m2)
	{
		cout<<"both same";
	}
	else
	{
		cout<<"not same";
	}
//	m2.get();
	return 0;
}
