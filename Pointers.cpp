#include<iostream>
using namespace std;
int main()
{
	string name, course;
	int age, *ptrage = &age;
	
	cout<<"Enter name: ";
	cin>>name;
	
	cout<<"Enter age: ";
	while (!(cin>>age)){ // receive user input
		cout<<"\n\t\tError! Invalid input! try again.\n"<<endl;	// explain the error
		cout<<"\n--------------------------------"<<endl;
		cout<<"Enter age: ";
		cin.clear(); // clear the previouse input
		cin.ignore(50, '\n'); // discard previouse input
		}
	
	cout<<"Enter course: ";
	cin>>course;
	
	cout<<"________________________________"<<endl; //display "________________________________"
	
	cout<<"\nYou enter the following:"<<endl; //diplay the txt
	cout<<"Name	: "<<name			  <<endl;	//diplay the users input name
	cout<<"Age	: "<<age			  <<endl;	//diplay the users input age
	cout<<"Course	: "<<course		  <<endl;	//diplay the users input course
	cout<<"________________________________"<<endl;
	
	cout<<"\nPointer address	: "<<ptrage  <<endl; //display the address of age
	cout<<"Pointer value	: "<<*ptrage 	 <<endl; //display the pointers of age
	cout<<"Age address	: "<<&age 			 <<endl; //display the Age address
	cout<<"Age value	: "<<age 			 <<endl; //display the value of age
	cout<<"________________________________" <<endl; //display "________________________________"
	
	cout<<"\nOutput:\t"<<name<<" a "<<course<<" student,"<<" is "<<*ptrage<<" years old."<<endl; //diplay all the users input along with the txt on this line
	return 0;
}
