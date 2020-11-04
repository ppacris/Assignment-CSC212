#include<iostream>
using namespace std;

int integer(int, int = 5);

int main(){
	cout << integer(5);
	return 0;
}

int integer(int, int num2){
	int arr[100], large;
	bool input = true;
	
	cout << "Enter five(5) numbers: ";
	for (int i = 0; i < num2; i++){
		cin >> arr[i];
		cout << "\t\t       ";
		if (input){
		large = arr[i];
		input = false;
		}
		if (large < arr[i]){
		large = arr[i];
		}
	}
	cout << "\n------------------------" << endl;
	cout << "The largest number is: ";
	return large;
}
