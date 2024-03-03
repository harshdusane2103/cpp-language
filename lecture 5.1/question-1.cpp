#include<iostream>
using namespace std;
class cas
{
    protected:
	int a,b,c,d,e;
		
};
class Calsi :public cas
{
	public:
  void calculate(int a,int b)
  {
  	this->a=a;
  	this->b=b;
  	cout<<"Division ="<<a/b<<endl;
  }
  void calculate(int a,int b,int c)
  {
  	this->a=a;
  	this->b=b;
  	this->c=c;
  	cout<<"Subtraction ="<<a-b-c<<endl;
  }
   void calculate(int a,int b,int c,int d)
  {
  	this->a=a;
  	this->b=b;
  	this->c=c;
  	this->d=d;
  	cout<<"Mulitplication="<<a*b*c*d<<endl;
  }
   void calculate(int a,int b,int c,int d,int e)
  {
  	this->a=a;
  	this->b=b;
  	cout<<"Addtion ="<<a+b+c+d+e<<endl;
  }
};
int main()
{
	Calsi c1;
	c1.calculate(100,5);
	c1.calculate(100,20,10);
	c1.calculate(100,5,236,28);
	c1.calculate(100,20,10,2782,26);
	
	return 0;
}
