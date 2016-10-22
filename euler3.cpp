//laboratory euler
//abao jade ella
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream what("input.txt");
	int n,x;
	while(what>>n)
	{
		for(int i=1;i<n;i++)
		if(i%3==0 || i%5==0){
			x+=i;
		}
	cout<<x<<endl;	
	}
system("pause");
}
