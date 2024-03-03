#include<iostream>
using namespace std;
class time
{
	public:
		int second;
		
		
	void sec()
	{
		cout <<"Seconds : ";
		cin>>second;
		int hh=second/3600;
		int second=second %3600;
		int mm=second/60;
		int ss=second%60;
		cout<<"HH:MM:SS:"<<":"<<hh<<":"<<mm<<":"<<ss;
	}
};
int main()
{
	time t1;
	t1.sec();
	return 0;
}
