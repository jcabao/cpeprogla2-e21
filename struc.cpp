#include <iostream>
#include <string.h>
#include<stdio.h> 
#include <conio.h>
using namespace std;
char str1[100];
char str2[100];
char string(char x[100]);
char stri(char a[100]);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

int main(){
	problem1();
	problem2();
	problem3();
	problem4();
	problem5();
	problem6();}
	
 void problem1(){
	
	int result;
	cout << "**************" << endl;
	cout << "String Compare" << endl;
	cout << "**************" << endl;
	cout << "Enter a first word (str1): " << endl;
	cin >> str1;
	cout << "Enter a second word (str2): " << endl;
	cin >> str2;	
	result = strcmp(str1,str2);	
	switch(result)
	{
	case ( 1 ):
	cout << "\nPositive " << endl;
	break;
	case ( 0 ):
	cout << "\nEqual " << endl;
	break;
	case ( -1 ):
	cout << "\nNegative" << endl;
	break;}
}

void problem2(){
	cout << "\n***********" << endl;
	cout << "String Copy" << endl;
	cout << "***********" << endl;
	char str(char x[100], char y[100]);
    cout<<"Enter a first word(str1):" << endl;
    cin >> str1;
    cout<<"Enter a second word(str2):" << endl;
    cin >> str2;
    str(str1,str2);
}
char str(char x[100], char y[100]){
     cout<<"\nnew string value for str1:"<<strcpy(x,y) << endl;
}

void problem3(){
	cout << "\n******************" << endl;
	cout << "String Concatinate" << endl;
	cout << "******************" << endl;
    char string(char a[100], char b[100]);
    cout<<"Enter a first word(str1):"<< endl;
    cin >> str1;
    cout<<"Enter a second word(str2):" << endl;
    cin >> str2;
    string(str1,str2);
}
char string(char a[100], char b[100]){
     cout<<"\nnew string value for str1:"<<strcat (a,b);
}

void problem4(){
	int x=0;
	bool palindrome=true;
	cout << "\n\n*********" << endl;
	cout << "Palidrome" << endl;
	cout << "*********" << endl;
	cout<<"Enter a word: ";
	cin >> str1;
	while (str1[x]!='\0')
	x++;
	for(int i=0; i<x; i++){
		if(str1[i]!=str1[x-i-1]){
			palindrome=false;
			break;
		}
	}
	if(palindrome)
	cout <<endl <<str1 <<" is a palidrome\n";
	else
	cout<< endl <<str1 <<" is not a palidrome\n";
}

void problem5(){
	char str1[100];
	cout << "\n\n*********" << endl;
	cout << "Problem 5" << endl;
	cout << "*********" << endl;
    cout<<"Enter some string:";
    cin.ignore();
	gets(str1);
    stri(str1);
}
char stri(char a[100])
{
    if(a[0]>='A' && a[0]<='Z') 
    a[0]=(char)a[0]+32; 
    for(int i=0;a[i]!='\0';i++)  
{
    if(a[i+1]>='A' && a[i+1]<='Z') 
    a[i+1]=(char)(a[i+1]+32); 
} 
    if(a[0]>='a' && a[0]<='z') 
    a[0]=(char)a[0]-32; 
    for(int i=1;a[i]!='\0';i++) 
{ 
    if(a[i]==' ') 
{ 
    if(a[i+1]>='a' && a[i+1]<='z') 
    a[i+1]=(char)(a[i+1]-32); 
} 
}
    cout<<a;
}

void problem6(){
	char str[100];
	cout << "\n\n*********" << endl;
	cout << "Problem 6" << endl;
	cout << "*********" << endl;
 int i,tmp;
 printf("Enter any string: ");
 gets(str);
 for(i=0; str[i]!='\0'; i++);
 for(i--; i>=0;i--)
 {
  if(str[i-1]==' ' || i==0)
  {
   for(tmp=i; str[tmp]!='\0' && str[tmp]!=' '; tmp++)
      cout<<str[tmp];
      cout<<"\n";
  }
 }
}
