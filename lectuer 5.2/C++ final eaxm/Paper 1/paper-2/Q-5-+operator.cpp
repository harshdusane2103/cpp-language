/*Q-5 Overload the `+` operator for the `BankAccount` class to display account details. Create two `BankAccount` objects and demonstrate the use of the overloaded `+` operator to display total amount of both accounts.*/
 #include<iostream>
 using namespace std;
 class Bankaccount
 {
 	string accountNumber;
 	int balance,total;
 	string ownername;
 	
 	public:
 
 	    void Credit()
 	    {
 	    	int amount;
 	    	 cout<<"Enter the Balnace:";
 			 cin>>balance;
 	    	cout<<"Enter the credit amount :";
 	    	cin>>amount;
 	    	total=balance+amount;
 	    	
		 }
		 void get()
		 {
 	    	cout <<"Total Balance:"<<total<<endl;
		 	
		 }
//
//	Math operator+(Math &m2)
//		
//		{
//		   Math temp ;
//		   int x=this->a+m2.a;
//		   int y= this->b+m2.b;
//		   temp.a=x;
//		   temp.b=y;
//	        return temp;
//		}
 	
 	      Bankaccount operator +(Bankaccount &b2)
 	      {
 	      	Bankaccount temp;
 	         int total=this->total+b2.total;
 	         temp.total=total;
 	
 	      	 return temp;
		   }
 };
 
 int main()
 {
 	Bankaccount b1,b2,b3;
     b1.Credit();
     b2.Credit();
     b3=b1+b2;
      b3.get();
 	
   return 0;	
 }
 