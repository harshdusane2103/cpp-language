#include<iostream>
using namespace std;
class hotel
{
	int  hotel_id,hotel_rating ,hotel_staff_quantity,hotel_room_quantity;
	string hotel_type,hotel_location,line;
	static string hotel_name;
	static int hotel_establish_year;
	
	public:
		
		void input()
		{
			cout<<"Enter the Hotel ID :";
			cin>>hotel_id;
			getline(cin,line);
			cout<<"Enter the Hotel  Rating :";
			cin>>hotel_rating;
		      cout<<"Enter the Hotel satff Quantity :";
			cin>>hotel_staff_quantity;
		       cout<<"Enter the Hotel Room Quantity :";
			cin>>hotel_room_quantity;
			getline(cin,line);
		      cout<<"Enter the Hotel Type  :";
		       getline(cin,hotel_type);
		     cout<<"Enter the Hotel Location:";
		      getline(cin,hotel_location);
		
		}
        void output()
        {
        	 cout<<"Hotel Id :"<<hotel_id<<endl;
        	 cout<<"Hotel Name :"<<hotel_name<<endl;
        	 cout<<"Hotel Eastblish year :"<<hotel_establish_year<<endl;
        	 cout<<"Hotel Type :"<<hotel_type<<endl;
        	 cout<<"Hotel satff quantity :"<<hotel_staff_quantity<<endl;
        	 cout<<"Hotel Room Quantity :"<<hotel_room_quantity<<endl;
        	 cout<<"Hotel Location :"<<hotel_location<<endl;
        	 cout<<"Hotel Rating :"<<hotel_rating<<endl;
        	
		}
	
	
};
  
  string hotel::hotel_name="Sarvotam";
  int hotel::hotel_establish_year=1999;
  
  int main()
  {
  	hotel h1[50];
  	
  	for(int i=0;i<3;i++)
  	{
  		h1[i].input();
	  }
	  for(int i=0;i<3;i++)
	  {
	  	h1[i].output();
	  }
	  return 0;
  }