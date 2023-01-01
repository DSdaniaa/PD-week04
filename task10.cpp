#include <iostream>
using namespace std;
void discount( string country, float price );
main(){
string country;
float price;
while(true){
cout << "Enter price in dollars: ";
cin >> price;
cout << "Enter a country name: ";
cin >> country;
discount(country, price);
}
}


void discount(string country, float price){
float pay;
if(country == "pakistan"){
pay= (price-((5*price)/100));
}
if(country == "ireland"){
pay= (price-((10*price)/100));
}
if(country == "india"){
pay= (price-((20*price)/100));
}
if(country == "england"){
pay= (price-((30*price)/100));
}
if(country == "canada"){
pay= (price-((45*price)/100));
}
cout << "Final Price is: " << pay << endl;
}



