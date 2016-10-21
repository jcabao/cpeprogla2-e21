//laboratory 2
// abao jade ella
#include <iostream>
#include <stdlib.h>
#include<stdio.h> 
#include <conio.h>
#include <cmath>
#include <ctime>
using namespace std;

void problem1();
void problem2();
void problem3();

int main(){
	problem1();
	problem2();
	problem3();}
	
 void problem1(){
	
	double num1;
      cout<<"Enter a number to be round off: ";
      cin>>num1;
      cout<<"Round off value:"<<floor(num1+.5);
}

void problem2(){
	srand((unsigned)time(0));
	int integer;
	int lowest=1, highest=20;
	int range=(highest-lowest)+1;
	cout<< "\n\nUnique numbers: ";
	for(int index=0; index<10; index++)
	{
		integer=lowest+int(range*rand()/(RAND_MAX + 1.0));
		cout << integer<<" " << endl;	
	}
}

void problem3(){
	int factorial (int x);
	int n;
		cout<<"\nEnter number: ";
		cin>>n;

		int fact;

		fact = factorial(n);

		cout<<"The factorial of number: "<<n<<" is: "<<fact<<endl;

		getch();
        
}

int factorial(int x)
{

int i;
int F=1;

for (i = 1; i <= x; i++)
	F*=i;

	return F;
}

