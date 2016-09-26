#include <iostream>
#include <iomanip>
using namespace std;


struct student{
	int id, n;
	char name[80];
	double a,b,c,d;
	float g;

};
void newLine();
int main()
{
	student stud[5];
	int i;
	cout <<"Enter 5 Student(s) Record:"<< endl;
	for (i=0; i<5; i++)
	{
	cout<<"Student no "<< i+1 <<endl;
	cout<<"ID: ";
	cin>>stud[i].id;
	newLine();
	cout<<"Name: ";
	cin.getline(stud[i].name,80);
	cout<<"Enter 3 Quize(s): ";
	cin>>stud[i].a>>stud[i].b>>stud[i].c;
	stud[i].d=stud[i].a+stud[i].b+stud[i].c;
	stud[i].g=stud[i].d/3;
	cout<<"\n";
	
}
	cout <<setw(0)<<"No."
	<< setw(16)<<"Student ID"
	<< setw(25)<<"Student Name"
	<< setw(16)<<"Quiz"
	<< setw(9)<<"Remarks";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	for (i=0;i<5;i++)
	{
		cout<<endl;
		cout<<setw(0)<<i+1
	<< setw(14)<<stud[i].id
	<< setw(25)<<stud[i].name
	<< setw(20)<<stud[i].g
	<< setw(9);
	if(stud[i].g>100 || stud[i].g<0)
				 cout<<"Invalid\n";
				 else if (stud[i].g=0 || stud[i].g<75)
				 cout<<"Failed\n";
				 else if (stud[i].g>75 || stud[i].g<100)
				 cout<<"Passed\n";
	
	}

	system("pause");
	return 0;	
}
void newLine()
{
	char s;
	do{cin.get(s);}
	while(s!='\n');
	
}
