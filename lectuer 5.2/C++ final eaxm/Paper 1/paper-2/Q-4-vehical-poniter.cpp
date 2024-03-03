/*4. Extend the `Vehicle` hierarchy from Question 3 to include a virtual function `displayDetails()`. 
Implement the `displayDetails()` function in each derived class to print information specific to the vehicle. Create an array of `Vehicle` pointers,
 pointing to objects of different vehicles. 
Demonstrate polymorphism by calling the `displayDetails()` function for each object.*/

#include<iostream>
using namespace std;
class Vehicle
{
      virtual dispalydetails()
	  {
	  };
};
class Car:public Vehicle
{   
         string model;
		int speed,time,distance;
        public:
        	dispalydetails()
			{
				cout<<"Enter the car model:";
				cin>>model;
				cout<<"Enter the Disance:";
				cin>>distance;
				cout<<"Enter the speed:";
				cin>>speed;
				time=distance/speed;
		
				
				cout<<"______________________"<<endl;
				cout<<"Enter the car model:"<<model<<endl;
				cout<<"Enter the Disance:"<<distance<<endl;
				cout<<"Enter the speed:"<<speed<<endl;
				cout<<"Car time ="<<time<<"m/min"<<endl;
				
	       }
	
};
class Bike:public Vehicle
{
         string model;
		int speed,time,distance;
	 public:
   		dispalydetails()
			{
				cout<<"Enter the Bike model:";
				cin>>model;
				cout<<"Enter the Disance:";
				cin>>distance;
				cout<<"Enter the speed:";
				cin>>speed;
				time=distance/speed;
		
				
				cout<<"______________________"<<endl;
				cout<<"Enter the Bike model:"<<model<<endl;
				cout<<"Enter the Disance:"<<distance<<endl;
				cout<<"Enter the speed:"<<speed<<endl;
				cout<<"Bike  time ="<<time<<"m/min"<<endl;
				
	       }
};
int main()
{
	
	  Vehicle* vehicles[3];

    vehicles[0]= displaydetails();
	   vehicles[1] = Bike;
  

    for (int i = 0; i <3; ++i) {
        vehicles[i]->displayDetails();
    }

    
//    for (int i = 0; i < 3; ++i) {
//        delete vehicles[i];
//    }

    return 0;
  
}