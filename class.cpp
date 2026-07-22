#include<iostream>
 using namespace std;
 
 class student
 {
 	public:
 	string name = "sarthak";
 	int erp_id = 123456;
 	string course = "B.Tech CSE";
 	
 	void display()
 	{
 		cout<<"Student name is: "<<name<<endl;
 	
 		cout<<"Student ERP id is: "<<erp_id<<endl;
 	
 		cout<<"Student course is: "<<course<<endl;
 	}
 };
 
 int main()
 {
 	student s1;
 	s1.display();
 	return 0;
 }
