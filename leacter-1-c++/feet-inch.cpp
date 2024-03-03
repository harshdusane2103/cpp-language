#include<iostream>
using namespace std;
main()
{
	int feet,inch;
	cout<<"Enter the feet :";
	cin>>feet;
	cout<<"Enter the inch :";
	cin>>inch;
	if(inch>=12)
	{
		inch-=12;
		feet++;
	}
	
	cout<<"feet:"<<feet;
	cout<<"inch:"<<inch;
}