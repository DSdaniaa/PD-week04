#include <iostream>
using namespace std;
void totalprice(int red, int white, int tulip);

main(){
int red;
int white;
int tulip;
cout << "Enter number of Red Roses: ";
cin >> red;
cout << "Enter number of White Roses: ";
cin >> white;
cout << "Enter number of Tulips: ";
cin >> tulip;
totalprice(red, white, tulip);
}

void totalprice(int red, int white, int tulip){
float totalred;
float totalwhite;
float totaltulip;
float total;
float discount;
totalred= red*2.00;
totalwhite= white*4.10;
totaltulip= tulip*2.50;
total = totalred + totalwhite +totaltulip;
if(total > 200){
discount= (total - ((20*total)/100));
cout << "Original Price: " << total<<endl;
cout << "Price after Discount: " << discount;
}
}

