/*Extend the `Shape` hierarchy from Question 3 to include a virtual function `display()`.
 Implement the `display()` function in each derived class to print information specific 
 to the shape. Create an array of `Shape` pointers, pointing to objects of different 
 shapes. Demonstrate polymorphism by calling the `display()` function for each object.*/
#include<iostream>
using namespace std;
class Shape
{
    virtual void display()
	{
	}	
};

class Cricle :public Shape
{
   string color;
   float redius;
  		public:
  virtual void display()
  {
     
	 	cout<<"Enter cricle color :";
	 	getline(cin,color);
	 	cout<<"Enter the redius :";
	 	cin>>redius;
	 	
	
	 	float pie=3.14;
	 	float x=pie*redius*redius;
	 	cout<<"Color :"<<color<<endl;
	 	cout<<"Circle area :"<<x<<endl;

  }
	 
	 
};
class Tangle : public Shape
{
   string color;
   float length,width;
   
		public:
	virtual void display()
    	{
    		cout<<endl;
    	   cout<<"Enter Rectangle color :"<<endl;
    	    cin.ignore();
	 	    getline(cin,color);
    		cout<<"Enter Length :";
    		cin>>length;
    		cout<<"Enter Width: ";
    		cin>>width;
	
		
			float y=length*width;
			cout<<endl;
			cout<<"Color :"<<color<<endl;
			cout<<"Rectangle Area ="<<y;
		}
	
};
int main()
{
	Cricle c1;
    Tangle r1;
    	Cricle * ptr= &c1;
     	ptr->display();
        Tangle *ptr =&r1;
        ptr->display();
    return 0;
}
