/* Q-2. Define a class named `BankAccount` with private attributes `accountNumber`, `
balance`, and `ownerName`. 
Encapsulate these attributes using
 appropriate access specifiers.
  Implement public member functions to credit,
   debit, and display the balance.
Demonstrate encapsulation by interacting
 with the class through its member functions.*/
 
 
 #include<iostream>
 using namespace std;
 class Bankaccount
 {
 	string accountNumber;
 	int balance,total;
 	string ownername;
 	
 	public:
 		void set()
 		{
 			 cout<<"Enter the Account Number: ";
 			 cin>>accountNumber;
 			 cin.ignore();
 			 cout<<"Enter the owner Name :";
 			 getline(cin,ownername);
 			 cout<<"Enter the Balnace:";
 			 cin>>balance;
 			 
		 }
 	    void Credit()
 	    {
 	    	int amount;
 	    	cout<<"Enter the credit amount :";
 	    	cin>>amount;
 	    	total=balance+amount;
 	    	cout <<"Total Balance:"<<total<<endl;
 	    	
		 }
		 void Debit()
		 {
		 	int d_amount;
		 	cout<<"Enter the Debit amount :";
 	    	cin>>d_amount;
 	    	balance=total-d_amount;
 	    	
		 }
		 void get()
		 {
		 	cout<<" Account Number:"<<accountNumber<<endl;
 			cout<<" owername: "<<ownername<<endl;
 			cout<<" Balance :"<<balance<<endl;
		 }
 	
 };
 
 int main()
 {
 	Bankaccount b1;
 	b1.set();
 	b1.Credit();
 	b1.Debit();
 	b1.get();
   return 0;	
 }
 