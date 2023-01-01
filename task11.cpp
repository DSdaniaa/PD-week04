#include <iostream>
using namespace std;
void speeding(float speed);
main(){
float speed;
cout << "Enter your car speed: ";
cin >> speed;
speeding(speed);
}

void speeding(float speed){
if(speed > 100){
cout << "Halt...YOU WILL BE CHALLENGED!!!";
}
if(speed <= 100){
cout << "Perfect! You're going good";
}
}