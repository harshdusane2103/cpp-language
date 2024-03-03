#include<iostream>
using namespace std;
class Message
{
	string msg;
 
	public:
		 Message(string  msg)
	 {
	 	this->msg=msg;
	 }
	 void print()
	 {
	 	cout<<msg<<" "<<endl;
	 }
	 void print(string newmsg)
	 {
	 	cout<<msg<<" "<<newmsg;
	 }
	
};
int main()
{
	 Message m2("hello");
	 m2.print();
	 m2.print("flutter");
	 

	return 0;
}
