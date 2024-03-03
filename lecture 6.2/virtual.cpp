#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual  void calculate()=0;
};
class Cricle:public Shape
{
	float redius;
	public:
	void cricleget()
	{
		cout<<"Enter the radius :";
		cin>>redius;
	}
	void calculate()
	{
		float pie=3.14;
		float area=pie*redius*redius;
		cout<<"Cricle area :"<<area<<endl;
	}
};
class Triangle : public Shape
{
	float base,side;
	public:
	void cricleget()
	{
		cout<<"Enter the Base :";
		cin>>base;
		cout<<"Enter the side:";
		cin>>side;
	}
	void calculate()
	{
		
		float area=(base*side)/2;
		cout<<"Triangle area :"<<area<<endl;
	}
	
};
class Retangle : public Shape
{
	float length,width;
	public:
	void retangleget()
	{
		cout<<"Enter the length:";
		cin>>length;
		cout<<"Enter the width:";
		cin>>width;
	}
	void calculate()
	{
		
		float area=length*width;
		cout<<"Retangle area :"<<area<<endl;
	}
};
int main()
{ 
  Cricle c1;
  c1.cricleget();
  c1.calculate();
  
  Triangle t1;
  t1.cricleget();
  t1.calculate();
  
  Retangle r1;
  r1.retangleget();
  r1.calculate();
	return 0;
}