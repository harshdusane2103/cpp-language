#include<iostream>
using namespace std;
class Heigth
{
	public:
		int feet,inches;
		void sum()
		{
			cout<<"Enter the Feet :";
			cin>>feet;
			cout<<"Enter the incheas  :";
			cin>>inches;
			
			if(inches/12)
			{
				feet++;
			}
			cout<<"feet :"<<feet<<"inches :"<<inches;
			
		}
};
int main()
{
	Heigth h1;
	h1.sum();
	return 0;
}
