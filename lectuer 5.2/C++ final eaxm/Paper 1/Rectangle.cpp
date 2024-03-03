
/*Define a class named Rectangle with private attributes length and width.
 Implement public member functions to set and get the values of these attributes. 
 Include a method to calculate the area of the rectangle. 
 Create an object of the Rectangle class and demonstrate the 
 functionality of the implemented methods.*/
 
 
 #include<iostream>
 using namespace std;
 class Rectangle
 {
    int length,width,area;
    public:
    	void set()
    	{
    		cout<<"Enter Length :";
    		cin>>length;
    		cout<<"Enter Width: ";
    		cin>>width;
		}
		void get()
		{
			area=length*width;
			cout<<"Rectangle Area ="<<area;
		}
 	
 };
 
 int main()
 {
 	Rectangle r1;
 	r1.set();
 	r1.get();
 	return 0;
 }