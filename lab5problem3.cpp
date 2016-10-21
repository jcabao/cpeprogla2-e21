#include<iostream>
#include<conio.h>
#include<string.h>
#include <iomanip>
#include <string.h>
using namespace std;
const int apple=13;
const int orange=15;
const int banana=7;
const int ponkan=5;
const int guava=20;
const int longan=2;
const int pear=8; 
struct Name{
       char firstname[30];
       char lastname[30];
       };
struct Item{
       int id[4];
       char Name[10];
       int price[4];
       int quantity[3];
       int fruitprice[3];
       };
struct Date{
       int day;
       int month;
       int year;
       };
struct Order{
       Date date;
       Item item;
       };
struct costumer{
       char contactNo[30];
       Name name;
       Order order;
       };
       void newLine();
main()
    {
         costumer person[4][4];
         int oi[4];
         char ans;
         {
         cout<<"Enter 3 costumers\n\n";
         {
         for (int i=1;i<=3;i++)
         {
                          cout<<"\nCOSTUMER INFORMATION "<<i<<"\n";
                          cout<<"First Name:";
                          cin.getline(person[i][i].name.firstname,29);
                          cout<<"Last Name: ";
                          cin.getline(person[i][i].name.lastname,29);
                          cout<<"Contact No: ";
                          cin.getline(person[i][i].contactNo,29);
                          cout<<"Order Date:\n";
                          cout<<"Day: ";
                          cin>>person[i][i].order.date.day;
                          cout<<"Month: ";
                          cin>>person[i][i].order.date.month;
                          cout<<"Year: ";
                          cin>>person[i][i].order.date.year;
                          for(int o=1;o<=3;o++)
                          {
                          cout<<"ID: ";
                          cin>>person[i][o].order.item.id[o];
                          switch (person[i][o].order.item.id[o])
                          {
                                 case 1:
                                        cout<<"Name: Apple\n";
                                        cout<<"Price: "<<apple<<"\n";
                                        cout<<"Quantity: ";
                                        cin>>person[i][o].order.item.quantity[o];
                                        strcpy(person[i][o].order.item.Name,"Apple");
                                        person[i][o].order.item.fruitprice[o]=apple;
                                        person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*apple;
                                        break;
                                 case 2:
                                        cout<<"Name: Orange\n";
                                        cout<<"Price: "<<orange<<"\n";
                                        cout<<"Quantity: ";
                                        cin>>person[i][o].order.item.quantity[o];
                                        strcpy(person[i][o].order.item.Name,"Orange");
                                        person[i][o].order.item.fruitprice[o]=orange;
                                        person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*orange;
                                        break;
                                 case 3:
                                        cout<<"Name: Banana\n";
                                        cout<<"Price: "<<banana<<"\n";
                                        cout<<"Quantity: ";
                                        cin>>person[i][o].order.item.quantity[o];
                                        strcpy(person[i][o].order.item.Name,"Banana");
                                        person[i][o].order.item.fruitprice[o]=banana;
                                        person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*banana;
                                        break;
                                 case 4:
                                        cout<<"Name: Ponkan\n";
                                        cout<<"Price: "<<ponkan<<"\n";
                                        cout<<"Quantity: ";
                                        cin>>person[i][o].order.item.quantity[o];
                                        strcpy(person[i][o].order.item.Name,"Banana");
                                        person[i][o].order.item.fruitprice[o]=ponkan;
                                        person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*ponkan;
                                        break;
                                 case 5:
                                        cout<<"Name: Guava\n";
                                        cout<<"Price: "<<guava<<"\n";
                                        cout<<"Quantity: ";
                                        cin>>person[i][o].order.item.quantity[o];
                                        strcpy(person[i][o].order.item.Name,"Guava");
                                        person[i][o].order.item.fruitprice[o]=guava;
                                        person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*guava;
                                        break;
                                 case 6:
                                        cout<<"Name: Longan\n";
                                        cout<<"Price: "<<longan<<"\n";
                                        cout<<"Quantity: ";
                                        cin>>person[i][o].order.item.quantity[o];
                                        strcpy(person[i][o].order.item.Name,"Longan");
                                        person[i][o].order.item.fruitprice[o]=longan;
                                        person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*longan;
                                        break;
                                 case 7:
                                        cout<<"Name: Pear\n";
                                        cout<<"Price: "<<pear<<"\n";
                                        cout<<"Quantity: ";
                                        cin>>person[i][o].order.item.quantity[o];
                                        strcpy(person[i][o].order.item.Name,"Pear");
                                        person[i][o].order.item.fruitprice[o]=pear;
                                        person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*pear;
                                        break;
                                 
                                 default:
                                         cout<<"You input wrong ID";
                                         getch();
                                         return 0;  
                                        }
                                        }
                                        cout<<"\n\nSUMMARY REPORT\n";
                                        cout<<setw(2)<<"#"<<setw(22)<<"Costumer Name"<<setw(14)<<"Order Date"<<setw(10)<<"Item"<<setw(8)<<"price"<<setw(11)<<"Quantity\n";
                                        for(int i=1;i<=3;i++){
                                                cout<<setw(2)<<i<<setw(16)<<person[i][i].name.lastname<<" ,"<<person[i][i].name.firstname<<setw(6)<<person[i][i].order.date.day<<"/"<<person[i][i].order.date.month<<"/"<<person[i][i].order.date.year;
                                                cout<<endl;
                                        for(int o=1;o<=3;o++){
                                                cout<<setw(43)<<" "<<person[i][o].order.item.Name<<setw(6)<<person[i][o].order.item.fruitprice[o]<<setw(7)<<person[i][o].order.item.quantity[o]<<" \n";
                                                }
                                        
                                        for(int o=1;o<=1;o++){
                                                        cout<<setw(45)<<"TOTAL PRICE:"<<setw(17)<<person[i][o].order.item.id[1]+person[i][o+1].order.item.id[2]+person[i][o+2].order.item.id[3]<<".00"<<endl;
                                                        }
                                                        }
                                        }
                                    }
                                }
                                                          
         getch();
         return 0;
         }
         void newLine(){
 char s;
 do{cin.get(s);}
 while(s!='\n');
 
}

         
         
