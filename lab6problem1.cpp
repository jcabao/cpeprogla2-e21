//laboratory 6 problem1
//abao jade ella
#include<iostream>
using namespace std;
	

int main(){
    FILE *fp;
	fp = fopen("sample.txt", "w");
	    
    if(!fp){
    cout << "Cannot open file";
    system("pause");
    exit(1);}
	for(int i=65; i<91; i++){
    fputc(i, fp);}    
	fclose(fp);
	return 0;
	}
