#include <iostream>
#include<conio.h>
using namespace std;

int factorial (int x);

int main () 
{

	int n;
		cout<<"Enter number: ";
		cin>>n;

		int fact;

		fact = factorial(n);

		cout<<"The factorial of number: "<<n<<" is: "<<fact<<endl;

		getch();
                           getch();
		return 0;
}

int factorial(int x)
{

int i;
int F=1;

for (i = 1; i <= x; i++)
	F*=i;

	return F;
}

