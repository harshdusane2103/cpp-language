#include<iostream>
using namespace std;
class Area
{
	protected:
		int length,heigth;
      void get()
      {
         cout<<"Enter the Heigth :";
		cin>>heigth;
		cout<<"Enter the length :";
		cin>>length;
	  }
};
class Triangle:public Area
{
	public:
	void trianglearea()
	{
		get();
		int area= 1/2*(length*heigth);
		cout<<"Tringle Area :"<<area<<endl;
	}
};
class Retangle:public Area
{
	public:
	void retnglearea()
	{
		get();
		int area= (length*heigth);
		cout<<"Retngle Area :"<<area<<endl;
	}
};
int main()
{
	Triangle t;
	Retangle r;
	t.trianglearea();
	r.retnglearea();
	return 0;
}
