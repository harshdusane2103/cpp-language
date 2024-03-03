/*3. Define a base class `Vehicle` with private attributes `model` and `speed`. 
Implement public member functions for setting and getting these attributes. 
Derive two classes, `Car` and `Bike`, from the `Vehicle` class. Implement methods to calculate the time taken for a certain distance based on the speed of each vehicle. 
Demonstrate abstraction by calling the time calculation methods for both `Car` and `Bike`.*/

#include<iostream>
using namespace std;
class Vehicle
{
	protected:
	string model;
	int speed;
};
class Car:public Vehicle
{   

		int time,distance;
        public:
	void setting()
	{
		cout<<"Enter the car model:";
		cin>>model;
		cout<<"Enter the Disance:";
		cin>>distance;
		cout<<"Enter the speed:";
		cin>>speed;
		time=distance/speed;
		
		
	}
	void getting()
	{
		cout<<"______________________"<<endl;
		cout<<"Enter the car model:"<<model<<endl;
		cout<<"Enter the Disance:"<<distance<<endl;
		cout<<"Enter the speed:"<<speed<<endl;
		cout<<"Car time ="<<time<<"m/min"<<endl;
		
		
	}
};
class Bike:public Vehicle
{
	 int time,distance;
	 public:
   	void setting()
	{
		cout<<"Enter the Bike model:";
		cin>>model;
		cout<<"Enter the Disance:";
		cin>>distance;
		cout<<"Enter the speed:";
		cin>>speed;
		time=distance/speed;
	}
	void getting()
	{
		cout<<"______________________"<<endl;
		cout<<"Enter the Bike model:"<<model<<endl;
		cout<<"Enter the Disance:"<<distance<<endl;
		cout<<"Enter the speed:"<<speed<<endl;
		cout<<"Bike time ="<<time<<"m/min"<<endl;
		
	}
};
int main()
{
	Car c1;
	c1.setting();
	c1.getting();
	Bike b1;
	b1.setting();
	b1.getting();
	return 0;
}