#include<iostream>
using namespace std;
class Add
{
	int km,meter;
	public:
	            
		void set()
		{
			cout<<"Enter Kilometer:";
			cin>>km;
			cout<<"Enter Meter:";
			cin>>meter;
		}
		void get()
		{
			cout<<"KM :"<<km<<endl;
			cout<<"METER :"<<meter<<endl;
			
		}
		Add operator +(Add &a2)
		{
			
			    Add temp;
		            int total_meter=this->meter+a2.meter;
			        	int ok=total_meter/1000;
			        	int x=total_meter%1000;
			        	int y=this->km +a2.km+ok;
			     
		 temp.km=y;
		 temp.meter=x;
			    
			        	return temp ;
			        	
	
		}
			
		
};

int main()
{
	Add a1,a2,a3;
	a1.set();
	a2.set();
	a3=a1+a2;
	a3.get();
	return 0;
}