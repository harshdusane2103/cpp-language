#include<iostream>
using namespace std;
main()
{
	int n;
	cout <<"Enter the size of array :";
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		
		cin>>a[i] ;
	}
	cout<<"Array element :\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Even number \n";
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<< a[i] << endl;
		}
	}
}