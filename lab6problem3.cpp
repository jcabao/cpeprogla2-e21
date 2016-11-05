//laboratory 6 problem3
//abao jade ella
#include <iostream>

using namespace std;
	
int main(){
	FILE *fp;
	fp = fopen ("sample.txt", "a");
	    
	if(!fp){
	    cout << "Cannot open file";
	    system ("pause");
	    exit(1);}
	fputc('\n', fp);
	for (int i=97; i<123; i++){
	fputc (i, fp);
	}    
fclose (fp);
return 0;
}
