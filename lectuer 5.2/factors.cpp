#include<iostream>
using namespace std;
class Math
{
	int  num1,i=1;
	public:
		void set()
		{
			cout<<"Enter the Number:";
			cin>>num1;
			for(i=1;i<=num1;i++)
			{
				if(num1%i==0)
				{
					cout<<i<<endl;
				}
			}
	
		}

};
int main()
{
	Math m1;
	m1.set();

	return 0;
}
