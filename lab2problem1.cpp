#include <iostream>
#include <conio.h>
#include <cmath>
#include <stdlib.h>
using namespace std;
main()
{
      double num1;
      cout<<"Enter a number to be round off: ";
      cin>>num1;
      cout<<"\n";
      cout<<"Round off value:"<<floor(num1+.5);
      getch();
      return 0;
}
