/* Q-1   Create a class representing a `Movie` with attributes like `title`, `genre`, and `releasedYear`.
 Demonstrate the instantiation of objects using array and accessing their attributes.*/
#include<iostream>
using namespace std;
class Movie
{
	string title,genre;
  int 	releasedyear;
	
	public:
		void set()
		{
			cout<<"Enter the Movie title :";
			cin>>title;
			cout<<"Enter gener:";
			cin>>genre;
			cout<<"Enter the Movie releaseyear:";
			cin>>releasedyear;
		}
		void get()
		{
			cout<<endl;
			cout<<"Movie title :"<<title<<endl;
			cout<<"Gener:"<<genre<<endl;
			cout<<"Movie Releasedate :"<<releasedyear<<endl;
			
		}
	
	
};
int main()
{
	Movie m1[3];
	for(int i=0;i<3;i++)
	{
		m1[i].set();
		
	}
	for(int j=0;j<3;j++)
	{
		
		m1[j].get();
	}
	return 0;
}