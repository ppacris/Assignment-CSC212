#include<iostream>
using namespace std;
int main()
{
	int arr[10], size, i, j, k;
	string name[] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eigth", "night", "tenth"};
	
	cout << "Enter size of an array min. of 1 and max. of 10: ";
	cin >> size;
	cout << endl;
	if ( size >= 1 && size <= 10){
		for ( i = 0; i < size; i++){
		cout << "Enter " << name[i] << " element: \t";
		cin >> arr[i];
		}
	}else{
		cout << "wrong input!";
		return 0;
		}
	cout << "\n";
	cout << "User input(original): \t";
	for( i = 0; i < size; i++){
		cout << arr[i] << ", ";
		}
	j = i - 1;  // j will point to the last element.
	i = 0;   //  and i will be point to the first element.
	while( i < j ){
		k = arr[i];
		arr[i] = arr[j];
		arr[j] = k;
		i++;
		j--;
		}
	cout << endl;
	// print the reverse input elements
	cout << "User input(reverse): \t";
	for( i = 0; i < size; i++){
		cout << arr[i] << ", ";
		}
	return 0;
}
