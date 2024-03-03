//a person cannot be able to vote if his/her age is less than 18
#include<iostream>
using namespace std;
int main()
{ 
   int age;
      cout<<"Enter A:";
      cin>>age;
   
      try
      {
      	if(age<18)
      	{
      		throw age;
		  }
		  else
		  {
		  	cout<<"your  age is" <<" "<< age <<"you are able for votting "<<endl;
		  }
	  }
	  catch(...)
	  {
	  	cout<<"you can't vote !'";
	  	
	  }
	
	return 0;
}
