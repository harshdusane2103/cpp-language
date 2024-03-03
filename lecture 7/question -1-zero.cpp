//- a number cannot be divided by zero
#include<iostream>
using namespace std;
int main()
{ 
   int a,b;
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
	
	return 0;
}
