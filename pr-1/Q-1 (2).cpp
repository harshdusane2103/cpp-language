#include<iostream>
using namespace std;
class Heigth
{
	public:
		int feet1,inc1,feet2,inc2;
		void sum()
		{
			cout<<"Enter the Feet :";
			cin>>feet1;
			cout<<"Enter the incheas  :";
			cin>>inc1;
			cout<<"Enter the Feet :";
			cin>>feet2;
			cout<<"Enter the incheas  :";
			cin>>inc2;
			
			feet1 = feet1 + (inc1 /12);
			inc1 = inc1 % 12;
			
			feet2 = feet2 + (inc2 /12);
			inc2 = inc2 % 12;
			
			
			cout<<"feet :"<<feet1+feet2<<"inches :"<<inc1+inc2;
			
		}
};
int main()
{
	Heigth h1;
	h1.sum();
	return 0;
}
