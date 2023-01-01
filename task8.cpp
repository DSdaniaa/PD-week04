#include <iostream>
using namespace std;
void isequal(int num1 , int num2);

main(){
int num1;
int num2;
cout << "Enter a integer: ";
cin >> num1;
cout << "Enter another integer: ";
cin >> num2;
isequal(num1, num2);
}

void isequal(int num1, int  num2){
if(num1 == num2){
cout << "True";
}
if(num1 != num2){
cout << "false";
}
}