/*Define a class named `Employee` with private attributes `name`, `salary`, and `designation`.
 Encapsulate these attributes using appropriate access specifiers.
 Implement public member functions to set and get the values of these attributes.
 Demonstrate the encapsulation concept by accessing these attributes through the member functions.*/
 
 #include<iostream>
 using namespace std;
 class Employee
 {
 	string name ,designation;
 	int salry;
 	public:
 		void set()
 		{
 			cout<<"Enter Name :";
 			getline(cin,name);
 			cout<<"Enter Designation:";
 			getline(cin,designation);
 			cout<<"Enter the salry :";
 			cin>>salry;
 			
// 			set();
		 }
   	     void get()
   	     {
			cout<<" Name :"      <<name;
 			
 			cout<<" Designation:" <<designation;
 			
 			cout<<"Enter the salry :"<<salry;
 			cout<<endl;
 			;
// 			get();
		 }
 };
 int main()
 {
 	Employee e1;
 	e1.set();
 	e1.get();
 	return 0;
 }