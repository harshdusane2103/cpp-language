#include<iostream>
using namespace std;
main()
{
	int start,end,x=0;
	cout<<"Enter the starting point of year :";
	cin>>start;
	cout<<"Enter the ending point of year :";
	cin>>end;
	
	int leap=end-start;
	int year=(leap/4) + 1;
	int a[year];
	for(int i=start;i<=end;i++)
	{
		if(i%4 == 0)
		{
			a[x] = i;
			x++;
		}
	}
	
	cout<<endl<<"Leap year are : ";
	for(int i=0;i<x;i++)
	{
		cout<<a[i]<<" ";
	}

}
