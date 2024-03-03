#include<iostream>
using namespace std;
class Time
{
		public:
		int second;
			int hour,sec,min;
	void sc()
	{
	

		cout<<"Enter the second :";
		cin>>second;
			int HH,MM,SS;
		hour=second/3600;
		second=second%3600;
		min=second/60;
		sec=second%60;
		cout<<"HH:MM:SS  ="<<hour<<":"<<min<<":"<<sec;
		
	}
};

int main()
{
	Time t1;
	t1.sc();
	return 0;
}
