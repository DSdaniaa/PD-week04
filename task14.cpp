#include <iostream>
using namespace std;
void compareMarks(string, float, string, float);
void calculateAggregate(string, float, float ,float);
void printMenu();

main(){
float Ecat;
string Name;
float Intermediate;
float matric;

cout << "Enter your Ecat score: ";
cin >> Ecat;
cout << "Enter your Matric score:";
cin >> matric;
cout << "Enter your Name: ";
cin >> Name;
cout << "Enter your Intermediate score:";
cin >> Intermediate;
printMenu();
calculateAggregate(Name, matric, Intermediate, Ecat);
string name1;
string name2;
int Ecat1;
int Ecat2;
cout << "enter first name to compare: ";
cin >> name1;
cout << "Enter Ecat score: ";
cin >> Ecat1;
cout << "enter second name to compare: ";
cin >>name2;
cout << "Enter Ecat score: ";
cin >> Ecat2;
compareMarks(name1, Ecat1, name2, Ecat2);

}

void printMenu(){
cout << "UNIVERSITY OF ENGINEERING AND TECHNOLOGY LAHORE" << endl;
cout << "   UNIVERSITY ADMISSION MANAGEMANT SYSTEM"<< endl;}


void calculateAggregate(string Name, float matric, float Intermediate, float Ecat){ 
float Aggregate;
float getE;
float getI;
float getM;
getE= ((((Ecat/400) * 100) * 40) / 100);
getM= ((((matric/1100) * 100) * 30) / 100);
getI= ((((Intermediate/550) * 100) * 30) / 100);
Aggregate= getE + getM + getE;

cout << "Name: " << Name << endl;

cout << "Aggregate: " << Aggregate << endl;}

void compareMarks( string name1, float Ecat1, string name2, float Ecat2){
if(Ecat1 > Ecat2){
cout << name1 << " gets the first roll number";}
if(Ecat2 > Ecat1){
cout << name2 << " gets the first roll number";}
}



