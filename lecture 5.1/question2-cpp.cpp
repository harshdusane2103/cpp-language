#include<iostream>
using namespace std;
class Cricket
{
	protected:
		int over;
		void overget()
		{
			cout<<"Over : "<<over<<endl;
		}
	
};
class T20 :public Cricket
{  
     public:

		void overget()
		{
			over=20;
			cout<<"Over T20: "<<over<<endl;
		}
	
};
class Odi :public Cricket
{ 
      public:
		void overget()
		{
			over=50;
			cout<<"Over ODI: "<<over<<endl;
		}
	
	
};
int main()
{
	T20 t1;
	Odi o1;
	t1.overget();
	o1.overget();
	
	
	return 0;
}
