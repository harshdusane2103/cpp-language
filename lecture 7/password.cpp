//a password cannot be validated if it doesn’t contains an uppercase letter
#include<iostream>
#include<string.h>
using namespace std;
int main()
{ 
  char password[50];
  cout<<"Enter the password :";
  cin>>password;
  int x=strlen(password);  
  int check=0;
  for(int i=0;i<=x;i++)
  {
  	if(password[i]>=65 && password[i]<90)
  	{
  		check=1;
	  }
  	
  }                                                                      
  try
  {
  	if(check!=1)
  	{
  		throw password;
	  }
	  else
	  {
	  	cout<<"password is vaildate !";
	  }
  	
  }
  catch(...)
  {
  	cout<<"password is not vaild !";
  }
	
	return 0;
}
