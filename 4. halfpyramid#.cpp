#include <iostream>
using namespace std;
int main()
{
	cout << "Patter 4: \n" << endl;
	for ( int a = 1; a <= 5; a++ ){
		for ( int b = 1; b <= a; b++ )
			cout<<a*b <<" ";
			cout<<"\n";
	}
	return 0;
}
