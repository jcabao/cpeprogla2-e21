//laboratory 6 problem2
//abao jade ella
#include<iostream>
using namespace std;
	
int main(){
	FILE *fp;
	fp = fopen("sample.txt", "r");
	    
	if(!fp){
	cout << "Cannot open file";
	system("pause");
	exit(1);}
	    char c;
	    while((c=fgetc(fp))!=EOF){
	        cout << c;
	    }    
fclose(fp);
system("pause");
return 0;
}
