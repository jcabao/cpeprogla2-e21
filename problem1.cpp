#include<iostream>
#include<conio.h>
#include<string.h>
#include <iomanip>
using namespace std;
struct stgrade{
	int stid;
	char name[100];
	double grade[3];
};
main()
{
	stgrade info;
	
	double no1;
	cout<<"Enter Student Record:"<<endl;
	cout<<"ID:";
	cin>>info.stid;
	cout<<"Enter your name:";
	cin.ignore();
	cin.getline(info.name,99);
    for (int i=0;i<3;i++)
    {
    cout<<"Quiz "<<i+1<<":";
    cin>>info.grade[i];
    no1+=info.grade[i];
}
no1=no1/3;
cout<<"\n";
cout<<"\n";
if(no1<=74 && no1>=0)
{
	cout<<"Student record\n";
	cout<<"ID:"<<info.stid<<"\n";
	cout<<"Name:"<<info.name<<"\n";
    cout<<"Grade:"<<setprecision(4)<<no1<<"\n";
	cout<<"Remarks: Failed";
}
else if(no1<=100 && no1>=75)	
{
	cout<<"Student Record:\n";
	cout<<"ID:"<<info.stid<<"\n";
	cout<<"Name:"<<info.name<<"\n";
    cout<<"Grade:"<<no1<<"\n";
	cout<<"Remarks: Passed";
}
else 
cout<<"invalid";
	getch();
  	return 0;
}
