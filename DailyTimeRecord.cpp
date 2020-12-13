#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

void write();
void total();
void read();

int main(){
	string input;

	cout << endl << "				  CITI GLOBAL COLLEGE" << endl << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "|||||||||||||||||||||||||||------DAILY TIME IN RECORD------|||||||||||||||||||||||||||" << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
	cout << "\t\t" <<"[1]TIME IN" << "\t" << "[2]TIME OUT" << "\t" << "[3]NUMBER OF HOURS QUERY" << endl;
	cout << "--------------------------------------------------------------------------------------" << endl;
	cout << "CHOOSE (1-3): ";
	getline(cin, input);
	
	if(input == "1"){
		write();
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
		cout << "|||||||||||||||||||||||||||||||     TIME  IN     |||||||||||||||||||||||||||||||||||||" << endl;
		cout << "|||||||||||||||||||||||||||||||     RECORDED     |||||||||||||||||||||||||||||||||||||" << endl;
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	}else if(input == "2"){
		write();
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
		cout << "|||||||||||||||||||||||||||||||     TIME OUT     |||||||||||||||||||||||||||||||||||||" << endl;
		cout << "|||||||||||||||||||||||||||||||     RECORDED     |||||||||||||||||||||||||||||||||||||" << endl;
		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	}else if(input == "3"){
		read();
		total();
	}else{
		cout << "Invalid input!";
	}

	return 0;
}

void write(){
	string fname, lname, filename;
	int sec, min, hrs;

	cout << "Enter first name: ";
	getline(cin, fname);
	cout << "Enter last name: ";
	getline(cin, lname);
	filename = fname + lname;
	filename += ".txt";
	
	ofstream txt(filename.c_str(), ios::app);
	if (txt.is_open()){
	
	time_t currentTime;
	time(&currentTime);
	struct tm *mytime = localtime(&currentTime);
	txt << "Day: " << mytime->tm_mday << "\t\tHours: " << mytime->tm_hour - 12 << "\tMinute/s: " << mytime->tm_min << "\tSecond/s: " << mytime->tm_sec << endl;
	}
	txt.close();
}

void total(){
	int sec, min, hrs;
	
	time_t currentTime;
	time(&currentTime);
	struct tm *mytime = localtime(&currentTime);
	
	sec = mytime->tm_sec + mytime->tm_sec;
	min = sec / 60;
	sec %= 60;
	
	min = mytime->tm_min + mytime->tm_min;
	hrs = min / 60;
	min %= 60;
	
	cout << "Total \t -> " << "\tHours: " << hrs << "\tMinute/s: " << min << "\tSecond/s: " << sec<< endl;
	cout << endl;
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
}

void read(){
	string fname, lname, filename, line;
	
	cout << "Enter first name: ";
	getline(cin, fname);
	cout << "Enter last name: ";
	getline(cin, lname);
	cout << endl;
	filename = fname + lname;
	filename += ".txt";
	string test = filename + ".txt";
	
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "|||||||||||||||||||||||||||||||      TOTAL       |||||||||||||||||||||||||||||||||||||" << endl;
	cout << "|||||||||||||||||||||||||||||||     RECORDED     |||||||||||||||||||||||||||||||||||||" << endl;
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;

	ifstream txt(filename.c_str());	
	if (txt.is_open())
	{
		cout << endl;
		while (getline(txt, line))
		{
			cout << line << endl;
		}
	}
	txt.close();
}
