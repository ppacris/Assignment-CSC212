#include <iostream>
#include<fstream>
#include<string>
using namespace std;
void add();
int timein(string,int,int,int,int);
int timeout(string,int,int,int,int);
void show(string);
int main()
{
    int mode;
    time_t now;struct tm nowLocal;
    int ors,day,mn,sc;now=time(NULL);
    nowLocal=*localtime(&now);
    
    string empn;
    int avg=0;
    cout<<"--------------------------------------------------------------------------\n";
    cout <<"[1] Add   [2] Time in   [3] Time out   [4] Show Employee's Record   [5] Exit\n";
    cout<<"--------------------------------------------------------------------------\n";
    cin>>mode;
    if(mode == 1)
    {
        add();
        return 0;
    }else if(mode == 2)
    {
        cout<<"Enter Employee Name:";
        cin>>empn;
        cout<<"--------------------------------------------------------------------------\n";
        cout<<"Time in!\n";
        cout<<"--------------------------------------------------------------------------\n";
        ors=nowLocal.tm_hour;mn=nowLocal.tm_min;sc=nowLocal.tm_sec;day=nowLocal.tm_mday;
        timein(empn,ors,mn,sc,day);
    }else if(mode == 3)
    {
        cout<<"Enter Employee Name:";
        cin>>empn;
        cout<<"--------------------------------------------------------------------------\n";
        cout<<"Time out!\n";
        cout<<"--------------------------------------------------------------------------\n";
        ors=nowLocal.tm_hour;mn=nowLocal.tm_min;sc=nowLocal.tm_sec;day=nowLocal.tm_mday;
        timeout(empn,ors,mn,sc,day);
    }else if(mode == 4)
    {
        cout<<"Enter Employee Name:";
        cin>>empn;
        cout<<"--------------------------------------------------------------------------\n";
        cout<<"Employee's Record:\n";
        show(empn);
    }else if(mode == 5)
    {
        cout<<". . .";
        
        return 0;
    }else{ cout<<"Error Input!!";int mode=0;}
    
    return 0;
}
void show(string name){
    int ch,cm,cs,cd,nday,all;string find;char out;
    ifstream oFile;
    oFile.open(name+".txt");
    if(oFile.fail())
    {
        cerr<<"Error Opening file:";
        exit(1);
    }
    while(!oFile.eof())
    {
        oFile >> find;
        if (find ==name)
        {
            oFile >>ch >> cm >> cs >> cd>>nday>>all>>out;
        }
    }
    cout<<"Total: ";
    if(ch>=1) cout<<ch<<" Hours,";
    if(cm>=1) cout<<cm<<" Minutes and ";
    cout<<cs<<" seconds\nDays of work:"<<cd;
    cout<<"\n--------------------------------------------------------------------------\n";
    oFile.close();
}
int timeout(string name,int ors,int mn,int sc,int day){
    string find,person;int nh,nm,ns,total;char out;
    int nday,ch,cm,cs,cd,h,m,s,all,call,hour=0,min=0,sec=0;
    ifstream oFile;
    oFile.open(name+".txt");
    if(oFile.fail())
    {
        cerr<<"Error Opening file:";
        exit(1);
    }
    while(!oFile.eof())
    {
        oFile >> find;
        if (find ==name)
        {
            oFile >>ch >> cm >> cs >> cd>>nday>>all>>out;
        }
    }
    if (out=='t'){
    h=ors*3600;
    m=mn*60;
    s=sc;total=h+m+s;
    call=total-all;
    while(call>3600){hour++;call-=3600;}
    while(call>60){min++;call-=60;}
    while(call>0){sec++;call--;}
    cout<<hour<<" "<<min<<" "<<sec<<" \n";
    nh=ch+hour;nm=cm+min;ns=cs+sec;
    if(ns>=60){nm++;ns-=60;}
    if(nm>=60){nh++;nm-=60;}
        ofstream iFile;
        iFile.open(name+".txt",ios::trunc);
        if (iFile.is_open())
	    {
		    iFile<<name<<" "<<nh<<" "<<nm<<" "<<ns<<" "<<cd<<" "<<day<<" 00000 f";
	    }
	oFile.close();
	iFile.close();
    }else cout<<"You didn't Timed in yet!!";
}
int timein(string name,int ors,int mn,int sc,int day){
    string find,person;char out;
    int nday,ch,cm,cs,cd,h,m,s,all,gen;
    ifstream oFile;
    oFile.open(name+".txt");
    if(oFile.fail())
    {
        cerr<<"Error Opening file:";
        exit(1);
    }
    while(!oFile.eof())
    {
        oFile >> find;
        if (find ==name)
        {
            oFile >>ch >> cm >> cs >> cd>>nday>>gen>>out;
        }
    }
    if(out=='f'){
    h=ors*3600;
    m=mn*60;
    s=sc;all=h+m+s;
    if(day!=nday)cd++;
        ofstream iFile;
        iFile.open(name+".txt",ios::trunc);
        if (iFile.is_open())
	    {
		    iFile<<name<<" "<<ch<<" "<<cm<<" "<<cs<<" "<<cd<<" "<<day<<" "<<all<<" t";
	    }
	oFile.close();
	iFile.close();
    }else cout<<"You didnt time out yet!!";
}
void add(){
    string empname;
    cout<<"Enter Employee Name:";
    cin>>empname;
    
    ofstream iFile;
    iFile.open(empname+".txt",ios::trunc);
    if (iFile.is_open())
	{
		iFile << empname<<" 0 0 0 0 0 0 f";
	}
	iFile.close();
}
