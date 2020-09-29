#include <iostream>
using namespace std;
int main()
{
	int count, a;
	
	cout<<"Enter an integer: ";
	cin>>count;
	cout<<"\n";
	a = count;
	count += 1;
	for(int b=1; b<=count; b++){
			cout<<a <<"*" <<b <<" = " <<a*b;
			cout<<endl;
	}
	return 0;
}
