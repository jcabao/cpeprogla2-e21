#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand((unsigned)time(0));
	int integer;
	int lowest=1, highest=20;
	int range=(highest-lowest)+1;
	cout<< "Unique numbers: ";
	for(int index=0; index<10; index++)
	{
		integer=lowest+int(range*rand()/(RAND_MAX + 1.0));
		cout << integer<<" " << endl;	
	}
	system ("PAUSE");
}

