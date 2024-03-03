#include<iostream>
using namespace std;
class Vote
{
	int age;
	public:
		void print()
		{
			cout<<"Enter the Age:";
			cin>>age;
			
			
			try
			{
				if(age<18)
				{
					throw age;
				}
				else
				{
					cout<<"Your age is "<<age<<" ,"<<"you are eligeble for votting !";
					
				}
			}
			catch(...)
			{
				cout<<"you can't vote !";
			}
		}
};

int main()
{
	Vote a;
	a.print();
}