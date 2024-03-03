#include<iostream>
using namespace std;
class student
{
   int stu_id,stu_age;
   string  stu_name, stu_course, stu_city, stu_college, stu_email,line;
   public:
   	void recoed()
   	{
   			cout<<"Enter your ID :";
   		cin>>(stu_id);
   	     getline(cin,line);
   		cout<<"Enter your name :";
   		getline(cin,stu_name);
   		
   		cout<<"Enter your course :";
   		getline(cin,stu_course);
   		cout<<"Enter your city:";
   		getline(cin,stu_city);
   		cout<<"Enter your collage :";
   		getline(cin,stu_college);
   		cout<<"Enter your Email :";
   		getline(cin,stu_email);
   	
   		cout<<"Enter your age:";
   		cin >>stu_age;
   		cout<<endl ;
	}
	void out()
	{
		cout<<"ID No :"<<stu_id <<endl;
		cout<<"Name :"<<stu_name <<endl;
		cout<<"Age :"<<stu_age<<endl;
		cout<<"Course:"<<stu_course<<endl;
		cout<<"college:"<<stu_college<<endl;
	    cout<<"Email :"<<stu_email<<endl;
		cout<<"city :"<<stu_city<<endl;
		cout<<endl;
	}
   	
};

int main()
{
	student s1;
	int i;
	for(i=0;i<2;i++)
	{
		s1.recoed();
	}
	
	
	for(i=0;i<2;i++)
	{
		s1.out();
	}
	return 0;
}
