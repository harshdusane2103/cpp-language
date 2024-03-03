
#include<iostream>
using namespace std;
class supermarket
{
    int price;
	static int Discount;
	string name;
	int quantiy;
	public:
		int number;
	void get()
	{
		cout<<"Enter the Item Number :";
		cin>>number;
		cout<<"Enter the Item Quantiy :";
//		 cin.ignore();
		 cin>>quantiy;
		cout<<"Enter the Item Price :";
		cin>>price;
		cin.ignore();
		cout<<"Enter the Item Name :";
		getline(cin,name);
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
     	cout<<"Discounnt :"<<Discount<<endl;
     	
	 }
};
int supermarket::Discount=10;
int main()
{
	
	supermarket s1[2];
	int i;
	for(i=1;i<=2;i++)
	{
		s1[i].get();
		cout<<endl;
	}
	int n;
	cout<<endl<<" Which item  you want to print enter : ";
	cin>>n;
	for(i=1;i<=2;i++)
	{
	     if(n==s1[i].number)
	     {
	     		s1[i].set();
		 }
	}
	
	int num,check=0;
	cout<<endl<<" you wnat to all record print Enter 1 : ";
	cin>>num;
	for(i=1;i<=2;i++)
	{
	     if(check==1)
	     {
	     		s1[i].set();
		 }
		 check=0;
	}
	
	

	return 0;
	
}