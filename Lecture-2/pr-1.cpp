#include<iostream>
using namespace std;
class math
{
	
	public:
	 int num1,num2,sum;
	 void input()
	 {
	 	cout<<"Enter num1 :";
	 	cin>>num1;
	 	cout<<"Enter num2 :";
	 	cin>>num2;
	}	
	 void add()
	 {
	 	sum= num1+num2;
	 	cout<<"ADDITION :"<<sum<<",";
	 }
};
int main()
{
	math m1;
    m1.input();
    m1.add();
	return 0;
}
