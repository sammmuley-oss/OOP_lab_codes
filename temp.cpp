/*#include<iostream>
 using namespace std;
 
 int main()
 {
 	float cel,fah;
 	cout<<"Enter the temperature in faranheit : ";
 	cin>>fah;
 	
 	cel = (fah-32)*5/9;
 	cout<<"The temperature is celsius is: %.2f"<<cel<<endl;
 	
 	return 0;
 } */
 
// using manupilators

#include<iostream>
#include<iomanip>
 using namespace std;
 
 int main()
 {
 	float cel,fah;
 	cout<<"Enter the temperature in faranheit : ";
 	cin>>fah;
 	
 	cel = (fah-32)*5/9;
 	
 	cout<<setprecision(2);
 	cout<<"The temperature is celsius is: "<<cel<<endl;
 	
 	cout<<fixed<<setprecision(4);
 	cout<<"The temperature is celsius is: "<<cel<<endl;
 	
 	return 0;
 }
