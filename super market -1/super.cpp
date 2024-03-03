
#include<iostream>
using namespace std;
class supermarket
{
    int price;
	static int Discount;
	string name,quantiy;
	public:
		int number;
	void get()
	{
		cout<<"Enter the Item Number :";
		cin>>number;
	
		cout<<"Enter the Item Name :";
			cin.ignore();
		getline(cin,name);
		
		cout<<"Enter the Item Quantiy :";
				 cin.ignore();
		 getline(cin,quantiy);

		cout<<"Enter the Item Price :";
		cin>>price;
     }
     void set()
     {
     	cout<<"  "<<endl;
     	cout<<"Welcome In Damart !"<<endl;
     	cout<<"--------------------"<<endl;
     	cout<<"Item Number :"<<number<<endl;
     	cout<<"Item Name :"<<name<<endl;
     	cout<<"Quantiy :"<<quantiy<<endl;
     	cout<<"Price :"<<price<<endl;
     	cout<<"Discounnt :"<<Discount<<"/%"<<endl;
     	
	 }
};
int supermarket::Discount=10;
int main()
{
	
	supermarket s1[3];
	int i;
	for(i=0;i<3;i++)
	{
		s1[i].get();
		cout<<endl;
	}
	int n;
	cout<<endl<<" Which item  you want to print enter : ";
	cin>>n;
	for(i=0;i<3;i++)
	{
	     if(n==s1[i].number)
	     {
	     		s1[i].set();
		 }
	}
	
	int num=0;
	cout<<endl<<" you wnat to all record print Enter 1 : ";
	cin>>num;
     if(num==1)
     {
     	for(i=0;i<3;i++)
     	{
     		s1[i].set();
		 }
		 num=0;
	 }
	 else
	 {
	 	cout<<"Exit the app";
	 }
	
	

	return 0;
	
}

