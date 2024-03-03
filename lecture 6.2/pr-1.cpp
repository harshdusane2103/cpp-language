#include<iostream>
using namespace std;
class Mcd
{
	protected:
	
		int royalty=500,profit,income;
	public:
		virtual void business()=0;
};
class Shakha:public Mcd
{
	public:
		void business()
		{
			cout<<"Enter the income :";
			cin>>income;
		}
		void netprofit()
		{
			profit=income-royalty;
			cout<<"Profit :"<<profit;
		}
  	
};

int main()
{
	Shakha s1;
	s1.business();
	s1.netprofit();
	
	return 0;
}