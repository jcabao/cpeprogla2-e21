//laboratory 5
//abao jade ella
#include <iostream>
#include <string.h>
#include<stdio.h> 
#include <conio.h>
#include <iomanip>

using namespace std;

struct stgrade{
	int stid;
	char name[100];
	double grade[3];};
	
void problem1();
void problem2();
void problem3();

int main(){
	problem1();
	problem2();
	problem3();}
	
 void problem1(){
	struct stgrade{
	int stid;
	char name[100];
	double grade[3];
};
	stgrade info;
	double no1;
	cout <<"Enter Student Record:" <<endl;
	cout <<"ID:";
	cin >>info.stid;
	cout <<"Enter your name:";
	cin.ignore();
	cin.getline(info.name,99);
    for (int i=0;i<3;i++){
    cout <<"Quiz "<<i+1 <<":";
    cin >>info.grade[i];
    no1+=info.grade[i];
}
no1=no1/3;
cout<<"\n";
if(no1<=74 && no1>=0){
	cout <<"Student record\n";
	cout <<"ID:"<<info.stid <<"\n";
	cout <<"Name:"<<info.name <<"\n";
    cout <<"Grade:"<<setprecision(4) <<no1 <<"\n";
	cout <<"Remarks: Failed";
}
else if(no1<=100 && no1>=75){
	cout <<"Student Record:\n";
	cout <<"ID:"<<info.stid<<"\n";
	cout <<"Name:"<<info.name<<"\n";
    cout <<"Grade:"<<no1<<"\n";
	cout <<"Remarks: Passed";
}
else 
	cout <<"invalid";
	
}

void problem2(){
	cout << "\n____________________" <<endl;
	struct student{
	int id, n;
	char name[80];
	double a,b,c,d;
	float g;
};
void newLine();
	student stud[5];
	int i;
	cout <<"\n\n\nEnter 5 Student(s) Record:"<< endl;
	for (i=0; i<5; i++){
	cout <<"Student no "<< i+1 <<endl;
	cout <<"ID: ";
	cin >>stud[i].id;
	newLine();
	cout <<"Name: ";
	cin.getline(stud[i].name,80);
	cout <<"Enter 3 Quize(s): ";
	cin >>stud[i].a >>stud[i].b >>stud[i].c;
	stud[i].d=stud[i].a+stud[i].b+stud[i].c;
	stud[i].g=stud[i].d/3;
	cout <<"\n";
}
	cout <<setw(0) <<"No."
	<< setw(16) <<"Student ID"
	<< setw(25) <<"Student Name"
	<< setw(16) <<"Quiz"
	<< setw(9) <<"Remarks";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	for (i=0;i<5;i++){
		cout <<endl;
		cout <<setw(0) <<i+1
	<< setw(14) <<stud[i].id
	<< setw(25) <<stud[i].name
	<< setw(20) <<stud[i].g
	<< setw(9);
	if (stud[i].g>100 || stud[i].g<0)
				 cout <<"Invalid\n";
				 else if (stud[i].g=0 || stud[i].g<75)
				 cout <<"Failed\n";
				 else if (stud[i].g>75 || stud[i].g<100)
				 cout <<"Passed\n";
	}	
}
void newLine(){
	char s;
	do{cin.get(s);}
	while(s!='\n');	
}
void problem3(){
	cout << "\n____________________" <<endl;
	struct Name{
	       char lastName[30];
	       char firstName[30];
	};
	struct Item{
	       int id[9];
	      char name[20];
	      double price[9];       
};
	struct Date{
		int day;
		int month; 
		int year;
};
	struct Order{
		Date date;
		Item item;
		int quantity;
};
	struct Custom{
		Name name;
		int contact;
		Order order;
};
int main;{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	int itms[3];
	 Custom custom[3];
	 int x;
	   double d=0;
	    for (int w=0;w<3;w++){
	    cout << "\n\n\n****COSTUMER PURCHASES****"<<endl;
		cout << "CUSTOMER INFORMATION " << w+1 << ":" << endl;
		cin.ignore();
		cout << "FIRST NAME : ";
	    gets(custom[w].name.firstName);
	     cout << "LAST NAME: ";
	    gets(custom[w].name.lastName);
	    cout << "CONTACT NUMBER: ";
	    cin>> custom[w].contact;
	    cout << "ORDER DATE: "<<endl;
	    cout << "DAY: ";
		cin >> custom[w].order.date.day;
		cout << " MONTH: ";
		cin>>custom[w].order.date.month;
		cout<< "YEAR: ";
		cin>>custom[w].order.date.year;
	    cout << "ENTER 3 ITEMS; " << endl;
	    for (int i=0; i<3; i++){  
	         cout << "ID: ";
		cin >> custom[w].order.item.id[i];
		cin.ignore();
		cout << "NAME: ";
		gets(custom[w].order.item.name);
		cout <<"PRICE: ";
		cin >> custom[w].order.item.price[i];\
		cout <<"QUANTITY: ";
		cin >>custom[w].order.quantity;		        
	    }
	    cout <<"****************************************\n***************************************"<< endl;
		}
			cout << "SUMMARY REPORT: \n";
			cout << "#" << setw(20) <<"COSTUMER NAME" <<setw(20) <<"ORDER DATE" <<setw(20) <<"ITEM" <<setw(20) <<"PRICE" <<setw(20) <<"QUANTITY" <<endl;
		for (int w=0;w<3;w++){
			cout << w+1 <<setw(10) << custom[w].name.lastName <<custom[w].name.firstName <<setw(25) <<custom[w].order.date.day <<"/" <<custom[w].order.date.month <<"/" <<custom[w].order.date.year <<endl;
		for (int i=0; i<3; i++){
			cout <<setw(55) <<custom[w].order.item.name <<setw(30) <<custom[w].order.item.price[i] <<setw(30) <<custom[w].order.quantity <<endl;
	 		x=custom[w].order.item.price[i] * custom[w].order.quantity;
		 	d+=x;
		 }
		system ("pause");
	}
}
}
