#include<iostream>
using namespace std;

class RBI 
{
	protected :
		float rate;
		
		void get()
        {
        	 cout<<"Enter the interes rate :";
        	 cin>>rate;
        }
};

class BOB : public RBI 
{ 
   public:
   	void get()
        {
        	 cout<<"Enter the interes rate  Of BOB:";
        	 cin>>rate;
        }
        void set()
        {
        	 cout<<"BOB interes rate :"<<rate<<"%"<<endl;
		}
   	
};
class SBI :public RBI
{    
     public:
   	void get()
        {
        	 cout<<"Enter the interes rate Of SBI :";
        	 cin>>rate;
        }
         void set()
        {
        	 cout<<"SBI interes rate :"<<rate<<"%"<<endl;
		}
};
class ICICI :public  RBI
{
    public:
   	void get()
        {
        	 cout<<"Enter the interes rate of ICICI :";
        	 cin>>rate;
        }
         void set()
        {
        	 cout<<" ICICI interes rate :"<<rate<<"%"<<endl;
		}
};


int main()
{
    SBI s;
    BOB b;
    ICICI i;
    s.get();
    b.get();
    i.get();
    
    s.set();
    b.set();
    i.set();
}
