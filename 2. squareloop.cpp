#include <iostream>
using namespace std;
int main()
{
	cout<<"pattern 2: \n" <<endl;
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 6; j++){
			if(i == 1 || i == 5 || j == 1 || j == 6)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
