#include <iostream>
using namespace std;
int main ()
{
  for(int a=1;a<=100;a++)
  {
    if(a%15==0)
      cout << "FizzBuzz" << endl;
    else
    if(a%5==0)
    	cout << "Buzz" << endl;
    else
	if(a%3==0)
    	cout << "Fizz" << endl;
    else 
		cout << a <<endl;
  }
  return 0;
}//abao
