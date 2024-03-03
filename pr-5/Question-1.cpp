#include<iostream>
using namespace std;
class Zero
{
	int a,b;
	public:
		void print()
		{
			cout<<"Enter the A:";
			cin>>a;
			cout<<"Enter the B:";
			cin>>b;
			
			try
			{
				if(b==0)
				{
					throw b;
				}
				else
				{
					cout<<"Divison: "<<a/b<<endl;
					
				}
			}
			catch(...)
			{
				cout<<"Value can't divied by Zero '0'";
			}
		}
};

int main()
{
	Zero a;
	a.print();
}