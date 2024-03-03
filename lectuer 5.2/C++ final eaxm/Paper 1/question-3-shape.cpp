/*Define a base class `Shape` with private attributes `color` and `area`.
 Implement public member functions for setting and getting the color and calculating the area. 
 Derive two classes, `Circle` and `Rectangle`, from the `Shape` class. 
 Implement methods to calculate the area specific to each shape.
 Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`*/
#include<iostream>
using namespace std;
class Shape
{
	

	virtual  void area()=0;
	
};
class Cricle :public Shape
{
   string color;
   float redius;
	public:
     void set()
	 {
	 	cout<<"Enter cricle color :";
	 	getline(cin,color);
	 	cout<<"Enter the redius :";
	 	cin>>redius;
	 	
	 }	
	 void area()
	 {
	 	float pie=3.14;
	 	float x=pie*redius*redius;
	 	cout<<"Color :"<<color<<endl;
	 	cout<<"Circle area :"<<x<<endl;
	 }
	 
	 
};
class Retangle : public Shape
{
   string color;
   float length,width;
   
		public:
	void set()
    	{
    		cout<<endl;
    	   cout<<"Enter Rectangle color :"<<endl;
    	    cin.ignore();
	 	    getline(cin,color);
    		cout<<"Enter Length :";
    		cin>>length;
    		cout<<"Enter Width: ";
    		cin>>width;
		}
		void area()
		{
			float y=length*width;
			cout<<endl;
			cout<<"Color :"<<color<<endl;
			cout<<"Rectangle Area ="<<y;
		}
	
};
int main()
{
     Cricle c1;
     c1.set();
     c1.area();
      Retangle r1;
      r1.set();
	  r1.area();
	
	return 0;
}
