/*Define a class `Calculator` with a method that performs division. Implement exception handling to handle the case of division by zero. Create an object of the `Calculator` class and demonstrate exception handling for division by zero.*/
#include<iostream>
using namespace std;
class Calculater
{
	int num1,num2,x;
	public:
	void divison()
	{
		cout<<"Enter the number:";
		cin>>num1;
		cout<<"Enter the number:";
		cin>>num2;
		cout<<"Enter the number:";
		cin>>x;
		if(x==0)
        {
        	cout<<"Division ="<<num1/num2;
		}
		else
		{
			cout<<"plese enter the 0";
			
				}		
	}
};

int main()
{
    Calculater c1;
	c1.divison();	
	return 0;
}