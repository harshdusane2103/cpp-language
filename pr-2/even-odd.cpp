#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the any number "<<":";
	cin>>n;
	int i;
			cout<<"Even number : \n";
	for(i=1;i<=n;i++)
	{

		if(i%2==0)
		{
			cout<<i<<endl;
		}

		
	}
	cout<<"Odd number : \n";
	for(i=1;i<=n;i++)
	{

		if(i%2==1)
		{
			cout<<i<<endl;
		}

		
	}
	return 0;
}
