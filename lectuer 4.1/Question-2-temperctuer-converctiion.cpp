/*Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
- Class P has the following members: temperature attribute in float
- Class Q has the following members: toFehrenheit() method
- Class R has the following members: toKelvin() method.*/

#include<iostream>
using namespace std;
class P
{
	protected :
		float cell;
};
class Q :public P
{
	protected:
		float f;
		public:
       void Fahrenheit()
       {
       	cout<<"Enter the celsius :";
		cin>>cell;
		f=cell*(1.8)+32;
		cout<<"Fernhit :"<<f<<endl;
       	
	   }
};
class R:public Q
{
	
    protected :
    	 float kev ;
	public :
	void Kelvin() 
	{
	   
	    kev = (f- 32) *5 / 9 + 273.15;
	   cout<<"Kelvin :"<<kev;
	}
	
};	

int main()
{
  
	R rr;
	rr.Fahrenheit();
	rr.Kelvin();
	return 0;
	
}
