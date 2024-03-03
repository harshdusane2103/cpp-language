/*Define a base class `Shape` with private attributes `color` and `area`.
 Implement public member functions for setting and getting the color and calculating the area. 
 Derive two classes, `Circle` and `Rectangle`, from the `Shape` class. 
 Implement methods to calculate the area specific to each shape.
 Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`*/
 
 #include<iostream>
 using namespace std;
 class Shape
 {
 	int redius,area,width,length;
 	string color;
 	public:
 		
     void circlesetting()
	 {
	 	cout<<"Enter cricle color :";
	 	getline(cin,color);
	 	cout<<"Enter the redius :";
	 	cin>>redius;
	 	
	 }	
	 void circlegetting()
	 {
	 	float pie=3.14;
	 	area=pie*redius*redius;
	 	cout<<"Color :"<<color<<endl;
	 	cout<<"Circle area :"<<area<<endl;
	 }
	 
	 
	 	void rectanglesetting()
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
		void rectanglegetting()
		{
			area=length*width;
			cout<<endl;
			cout<<"Color :"<<color<<endl;
			cout<<"Rectangle Area ="<<area;
		}
	 
 };
 
 int main()
 {
 	Shape s1;
 	s1.circlesetting();
 	s1.circlegetting();
 	s1.rectanglesetting();
 	s1.rectanglegetting();
 	return 0;
 }