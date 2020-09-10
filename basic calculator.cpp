#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	float x, y, num;
	int a=1, s=2, m=3, d=4;
	    cout<<"\t################################################\n";
		cout<<"\t|Choose an Arithmetic Operation you want to use|"<<endl;
		cout<<"\t################################################\n"<<endl;
		cout<<"Note:   press the corresponding number attach on the Arithmetic Operations\n\ton your keyboard to select."<<endl;
		cout<<"-----------------------------------------------------------\n"<<endl;
		cout<<"["<<a; cout<<"]"; cout<<"Addition \t\t\t\t";
		cout<<"["<<m; cout<<"]"; cout<<"Multiplication \t\t\t\t"<<endl;
		cout<<"\n["<<s; cout<<"]"; cout<<"Subtraction \t\t\t\t";
		cout<<"["<<d; cout<<"]"; cout<<"Division"<<endl;
		cout<<"\n-----------------------------------------------------------\n";
		cout<<"Select an operation: ";
		cin>>num;
		if (num == a){
			cout<<"\n\t\t[You select Addition.]";
		}else if (num == s){
			cout<<"\n\t\t[You select Subtraction.]";
		}else if (num == m){
			cout<<"\n\t\t[You select Multiplication.]";
		}else if (num == d){
			cout<<"\n\t\t[You select Division.]";
		}else {
			cout<<"\t\t\t\t!!!!!!!!!!!!!\n";
			cout<<"\t\t\t\t!WRONG INPUT!\n";
			cout<<"\t\t\t\t!!!!!!!!!!!!!\nCalculator 404 not found :D, terminating ";
			  	for(int a=0;a<=10;a++) // Change 'a<=?' to how many dot(.) you want
				{
					Sleep(500); // sleep(value) to work, #include<windows.h> is a must
					cout <<"..."; // output will continuously pop up base on the condition
					} cout<<" pls try again!"; // this cout will always see on output
			return 0;
		}
		cout<<"\n"<<endl;
		cout<<"Input 1st number: "; // ask user to input a number
		while (!(cin >> x)){ // receive user input
			cout<<"Error!\nInput 1st number: ";	// explain the error
			cin.clear(); // clear the previouse input
			cin.ignore(123, '\n'); // discard previouse input 
		}
		cout<<"Input 2nd number: "; // ask user to input a number
		while (!(cin >> y)){ // receive user input
			cout<<"Error!\nInput 2nd number: "; // explain the error
			cin.clear(); // clear the previouse input
			cin.ignore(123, '\n'); // discard previouse input
		}
		if (num == a){
			num = x + y;
			cout<<"--------------------------------";
			cout<<"\nThe sum is: "<<num;
		} else if (num == s){
			num = x - y;
			cout<<"--------------------------------";
			cout<<"\nThe difference is: "<<num;
		} else if (num == m){
			num = x * y;
			cout<<"--------------------------------";
			cout<<"\nThe product is: "<<num;
		} else if (num == d){
			num = x / y;
			if (num=x<y){
				cout<<"\n\tSorry, the dividend must be greater than the divisor!"<<endl;
			} else{
				num = x / y;
				cout<<"--------------------------------";
				cout<<"\nThe quotient is: "<<num;
			}
		}
		return 0;
}
