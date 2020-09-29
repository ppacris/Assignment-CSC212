#include<iostream>
using namespace std;
int main()
{
	int spc;
	cout<<"pattern 3: \n" <<endl;
	spc=5;
	for(int i=1; i<=5; i++){
		for(int k=spc; k>=1; k--){
			cout<<" ";
		}
		for (int j=1; j<=i; j++)
			cout<<"* ";
			cout<<"\n";
			spc--;
	}
	return 0;
}
