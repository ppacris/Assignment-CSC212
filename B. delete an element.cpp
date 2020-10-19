#include<iostream>
using namespace std;
int main()
{
	int arr[10], size, i, j, del, count = 0;
	string name[] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eigth", "night", "tenth"};
	
	// user input the size of an array.
	cout << "Enter size of an array min of 1 and max of 10. : ";
	cin >> size;
	
	// user input elements base on size entered.
	if ( size >= 1 && size <= 10 ){
		for ( i = 0; i < size; i++){
			cout << "Enter " << name[i] << " element: \t";
			cin >> arr[i];
			}
	}else{
		cout << "wrong input!" << endl;
		cout << "The requested operation is not permitted!";
		return 0;
	}
	cout << endl;
	
	// user choose what element to delete.
	cout << "Enter the position where to delete: ";
	cin >> del;
	cout << endl;
	
	// formula on deleting an element.
	for( i = 0 ; i < size; i++){
		if( arr[i] == del ){
			for( j = i; j < ( size - 1 ); j++){
				arr[j] = arr[j + 1];
				}
				count++;
		}
	}if( count == 0 ){
		cout << "The requested operation is not permitted!";
	}
	
	// expected output.
	else{
		cout << "Expected Output :" << endl;
		cout << "The new list is : ";
		for( i = 0; i < ( size - 1 ); i++){
			cout << arr[i] <<" ";
			}
	}
	return 0;
}
