/*
1
2 9
3 8 10
4 7 11 14
5 6 12 13 15
*/


#include<iostream>
using namespace std;
class Pattern
{
	int i,j;
	public:
		void get()
		{
			for(i=1;i<=5;i++)
			{
				for(j=i;j<=5;j++)
				{
					cout<<j;   
				
					 }
					 cout<<endl;
			}
		}
};
int main()
{
	Pattern p1;
	p1.get();
	
	return 0;
}