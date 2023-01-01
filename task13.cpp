#include <iostream>
using namespace std;
void Tomsleep(int holidays);

main()
{
  int holiday;
  cout << "Enter number of Holidays: ";
  cin >> holiday;
  Tomsleep(holiday);
}


void Tomsleep(int holidays)
{
  int working;
  float total;
  float difference;
  working = 365-holidays;
  total= (working*63)+(holidays*127);
  difference= (30000-total);
 if(total < 30000)
 {
   cout << "Tom Sleeps Well"<< endl;
   cout << difference << " minutes less for play";
 }
 if(total > 30000)
 {
   cout << "Tom will run away" <<endl;
   cout << difference << " minutes for play";
 }
}
