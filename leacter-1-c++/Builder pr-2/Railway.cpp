#include<iostream>
using namespace std;
class railway
{
	int tra_time;
	string tra_name,tra_source;
	static string tra_destination;
	public:
	int tra_number;
		railway(int number,int time,string name,string source)
		{
			   tra_number=number;
			   tra_time=time;
	           tra_name=name;
			   tra_source=source;
			   
		}
		void output()
		{
			cout<<"-----------------------------------"<<endl;
			cout<<"!Welcome In Indian Railway !"<<endl ;
			cout<<"Railway Name :"<<tra_name<<endl;
			cout<<"Railway Number :"<<tra_number<<endl;
			cout<<"Railway Source: "<<tra_source<<endl;
			cout<<"Railway Time :"<<tra_name<<endl;
			cout<<"Railway destion :"<<tra_destination<<endl;
		}
	
};
string railway::tra_destination="Mumbai";
int main()
{
	int i ;
	
		int number ,time;
		string name,source;
	railway r1[3]=railway(	number ,time, name,source);;
	for(i=0;i<3;i++)
	{
		cout<<"-----------------------------------"<<endl;
		cout<<"Railway Name :";
		cin.ignore();
		getline(cin,name);
		cout<<"Railway Number :";
		cin>>number;
		cout<<"Railway Source: ";
		cin.ignore();
		getline(cin,source);
		cout<<"Railway Time :";
		cin>>time;
		r1[i]=railway(	number ,time, name,source);
	}
	
	int n;
	cout<<endl<<" Which train you serach Enter Train Number : ";
	cin>>n;
	
	for(i=0;i<3;i++)
	{
	     if(n==r1[i].tra_number)
	     {
	     		r1[i].output();
		 }
	}

	return 0;
	
}
