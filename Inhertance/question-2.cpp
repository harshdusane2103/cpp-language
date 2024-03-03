#include<iostream>
using namespace std;
class Number
{
	protected:
		int num;
      void get()
      {
         cout<<"Enter the Number:";
		cin>>num;

	  }
};
class Squre:public Number
{
	public:
	void squre()
	{
		get();
		int squre= num*num;
		cout<<"Squre :"<<squre<<endl;
			int cube=num*num*num;
		cout<<"Cube :"<<cube<<endl;
	}
};
class Cube:public Number
{
	public:
	void cube()
	{
		get();
	
	}
};
int main()
{
	Squre s;
	Cube c;
	s.squre();
	c.cube();

	return 0;
}
