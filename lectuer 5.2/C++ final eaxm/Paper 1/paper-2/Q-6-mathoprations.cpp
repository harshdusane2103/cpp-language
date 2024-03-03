/*6. Define a class `MathOperations` with a method that performs a division operation.
 Implement exception handling to handle invalid inputs.
  Create an object of the `MathOperations` class and demonstrate exception handling for invalid inputs.*/
  
  #include<iostream>
  using namespace std;
  class Mathoperations
{    
						 int a,b;
           public:
			void operation()
			{
						cout<<"Enter A:";
						cin>>a;
						cout<<"Enter B:";
						cin>>b;
						try
						{
						if(b==0)
						{
							throw b;
						  }
						  else
						  {
						  	cout<<"Division:"<<a/b<<endl;
						  }
						}
						catch(...)
						{
						    cout<<"value can't divide by zero";
						
						}
						
					
						
            }
	  
  };
  
  int main()
  {
  	 Mathoperations m1;
  	 m1.operation();
  	
  	
  	return 0;
  }