#include<iostream>
using namespace std;
main()
{
	int end ,start;
	cout<<"Enter the starting point :";
	cin>>start;
	cout<<"Enter the end point :";
	cin>>end;
	int leap=end-start;
	int lenngth=leap/4+1;
	leap=end-start;
	int length=leap/4+1;
	int leapyear[length];
	
	int x=0;
	int i;
	for(i=start;i<=end;i++)
	{
		if(i%4==0)
		{
		   leapyear[x]=i;
		   x++;
		}
	}
	cout<<"leap yera :";
	
	for(i=0;i<x;i++)
	{
		cout<<leapyear[i]<<",";
	}
	
}