#include<iostream>
using namespace std;
int main()
{
	int num[10], num1 = 0;
	cout << "Enter ten(10) numbers. \n" <<endl;
	// input elements.
	for ( int i = 1; i <= 10; i++ ){
		cout << "Enter number-" << i << ": ";
		cin >> num[i];
		}
	// sorting an array in ascending
	for( int i = 1; i <= 10; i++ ){
		for( int j = 1; j <= 10; j++ ){
			// if there is a smaller element found on right of the elements of an array then swap it.
			if( num[i] < num[j] ){
				num1 = num[i];
				num[i] = num[j];
				num[j] = num1;
				}
			}
	}
	// output the sorted array in ascending order
	cout << "--------------------\n";
	cout << "Ascending order are: ";
	for( int i = 1; i <= 10; i++ ){
		cout << " " << num[i];
		}
	cout << endl;
	// if there is a bigger element found on right of the elements of an array then swap it.
	for( int i = 1; i <= 10; i++ ){
		for( int j = i + 1; j <= 10; j++ ){
			if( num[i] < num[j] ){
				num1 = num[i];
				num[i] = num[j];
				num[j] = num1;
				}
			}
	}
	// output the sorted array in adescending order.
	cout << "Descending order are: ";
	for( int i = 1; i <= 10; i++ ){
		cout << " " << num[i];
		}
	return 0;
}
