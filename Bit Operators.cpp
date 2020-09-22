#include<iostream>
using namespace std;
int main()
{
	int num, num1, num2, x;
	int a=1, b=2, c=3, d=4, e=5, f=6;
	
	cout<<"Choose an Operator base on their coressponding number aside. \n"<<endl;
	
	cout<<'('<<a<<')'<<" AND Operator"<<endl;
	cout<<'('<<b<<')'<<" OR Operator"<<endl;
	cout<<'('<<c<<')'<<" XOR Operator"<<endl;
	cout<<'('<<d<<')'<<" COMPLEMENT Operator"<<endl;
	cout<<"    *1's Complement"<<endl;
	cout<<"    *2's Complement"<<endl;
	cout<<'('<<e<<')'<<" RIGHT SHIFT Operator"<<endl;
	cout<<'('<<f<<')'<<" LEFT SHIFT Operator"<<endl;
	
	cout<<"\n--------------------------------"<<endl;
	cout<<"Enter Operator		: "; // ask user to input a number
		while (!(cin>>num && num >= 1 && num <= 6)){ 	// receive user input && condition
			cout<<"\n\t\tError! Invalid input! try again.\n"<<endl;	// explain the error
			cout<<"\n--------------------------------"<<endl;
			cout<<"Enter Operator		: ";
			cin.clear(); // clear the previouse input
			cin.ignore(100, '\n'); // discard previouse input 
		}
	if (num != 4){ // if user input "4" code will skip the statement
	cout<<"Enter first number	: ";
		while (!(cin >> num1)){ // receive user input
			cout<<"\n\t\tError! Invalid input! try again.\n"<<endl;	// explain the error
			cout<<"\n--------------------------------"<<endl;
			cout<<"Enter first number	: ";
			cin.clear(); // clear the previouse input
			cin.ignore(100, '\n'); // discard previouse input 
		}
	}
	if (num != 4){ // if user input "4" code will skip the statement
	cout<<"Enter second number 	: ";
		while (!(cin >> num2)){ // receive user input
			cout<<"\n\t\tError! Invalid input! try again.\n"<<endl;	// explain the error
			cout<<"\n--------------------------------"<<endl;
			cout<<"Enter second number	: ";
			cin.clear(); // clear the previouse input
			cin.ignore(100, '\n'); // discard previouse input 
		}
	}
	if (num != 4){
	cout<<"\n--------------------------------\n";
	}
	if(num == a){
		x = (num1 & num2); // formula
		cout<<"Answer			: "<<num1<<" & "<<num2<<" = "<<x;//display the user input on "Enter first number also the second number"  then display the answer which is x the formula
	}else if(num == b){
		x = (num1 | num2); // formula
		cout<<"Answer			: "<<num1<<" | "<<num2<<" = "<<x;//display the user input on "Enter first number also the second number"  then display the answer which is x the formula
	}else if(num == c){
		x = (num1 ^ num2); // formula
		cout<<"Answer			: "<<num1<<" ^ "<<num2<<" = "<<x;//display the user input on "Enter first number also the second number"  then display the answer which is x the formula
	}else if(num == d){
		cout<<"\nChoose with 1's complement or 2's complement:"<<endl;
		cout<<'('<<a<<')'<<" 1's Complement"<<endl;
		cout<<'('<<b<<')'<<" 2's Complement"<<endl;
		cout<<"\n--------------------------------\n";
		cout<<"Enter Complement	: ";
		cin>>num;
		if (num == a){
			cout<<"Enter a number		: ";
			while (!(cin >> num)){ // receive user input
				cout<<"\n\t\tError! Invalid input! try again.\n"<<endl;	// explain the error
				cout<<"\n--------------------------------"<<endl;
				cout<<"Enter a number	: ";
				cin.clear(); // clear the previouse input
				cin.ignore(100, '\n'); // discard previouse input 
				}
			cout<<"\n--------------------------------\n";
			x = (~num); // formula
			cout<<"Answer			: "<<"~"<<num<<" = "<<x;
			}else if (num == b){
				cout<<"Enter a number		: ";
				while (!(cin >> num)){ // receive user input
					cout<<"\n\t\tError! Invalid input! try again.\n"<<endl;	// explain the error
					cout<<"\n--------------------------------"<<endl;
					cout<<"Enter a number	: ";
					cin.clear(); // clear the previouse input
					cin.ignore(100, '\n'); // discard previouse input 
					}
				cout<<"\n--------------------------------\n";
				x = (-(num+1))+1; // formula
				cout<<"Answer			: "<<"(~"<<num<<")+1 = "<<x;
				}
	}else if(num == e){
		x = (num1 >> num2); // formula
		cout<<"Answer			: "<<num1<<" >> "<<num2<<" = "<<x; //display the user input on "Enter first number also the second number"  then display the answer which is x the formula
	}else if(num == f){
		x = (num1 << num2); // formula
		cout<<"Answer			: "<<num1<<" << "<<num2<<" = "<<x; //display the user input on "Enter first number also the second number"  then display the answer which is x the formula
	}
	return 0;
}
