#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

void write();
int read();

int main()
{
    int input, avg = 0;
    char repeat;
    
    while (repeat != 'N' && repeat != 'n'){
    cout <<"[1] to record grade." << "\n" << "[2] to retrieve average score of grade." << endl;
    cout <<"\nPress [1-2]: ";
    cin >> input;
    if(input == 1){
        write();
    }else if(input == 2){
        avg = read();
        cout<<"The Average of your Quiz Score is: " << avg;
    }else{
    	cout << "error invalid input!!" << endl;
    	system ("pause");
	}
	cout << "\n--------------------------------------";
	cout << "\nwould you like to continue? [Y/N]: ";
	cin >> repeat;
	cout << "--------------------------------------\n" << endl;
	}
    return 0;
}

int read(){
    string find, sname;
    int q1, q2, q3, avg;
    ifstream oFile;
    oFile.open("quiz.txt");
    cout << "Enter Name: ";
    cin >> sname;
    
    if(oFile.fail()){
        cout << "Error Opening file:";
        return 0;
    }
    while(!oFile.eof()){
        oFile >> find;
        if (find == sname){
            oFile >> q1 >> q2 >> q3;
        }
    }
    avg = (q1 + q2 +q3) / 3;
    oFile.close();
    return avg;
}

void write(){
    int q1, q2, q3;
    string sname;
    cout << "Enter student Name: ";
    cin >> sname;
    cout << "Enter Quiz Score #1: ";
    cin >> q1;
    cout << "Enter Quiz Score #2: ";
    cin >> q2;
    cout << "Enter Quiz Score #3: ";
    cin >> q3;
    ofstream file;
    file.open("quiz.txt",ios::app);
    if (file.is_open()){
		file << sname << " " << q1 << " " << q2 << " " << q3 << endl;
	}
	file.close();
}
