#include<iostream>
using namespace std;
class school
{
	int id,age;
	string name;
	static string schoolname;
	public:
		void input()
		{
			cout<<"Enter your name :";
			getline(cin,name);
			cout<<"Enter your Id :";
			cin>>id;
			cout<<"Enter your age:";
			cin>>age;
			cin.ignore();
			
		}
		void ouput()
		{
			cout<<endl<<schoolname<<endl;
			cout<<id<<" "<<name<<" "<<age ;
		}
		
};
 
 string school :: schoolname="Shree prtap high school";
 int main()
 {
 	school s1[50];
 	for(int i=0;i<3;i++)
 	{
 		s1[i].input();
	 }
 	for(int i=0;i<3;i++)
 	{
	 
 	s1[i].ouput();
   }
 	return 0;
 }