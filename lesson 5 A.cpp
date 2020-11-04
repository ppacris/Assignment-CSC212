#include<iostream>
using namespace std;

int evenNumbers(int, int);

int main()
{
	cout << evenNumbers(5, 5);
	return 0;
}

int evenNumbers(int, int size){
	int arr[100], i;
	
	for (int i = 0; i < size; i++){
		cout << "index-" << i <<": ";
		cin >> arr[i];
	}
	cout << endl;
	cout << "even Numbers: {";
	for (int i = 0; i < size; i++){
		if (arr[i] % 2 == 0){
			cout << arr[i];
			cout << ", ";
		}
	}
	cout << "}";
	return arr[i];
}
