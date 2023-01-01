#include <iostream>
using namespace std;
void reverse(string);
main(){
string word;
cout << "Enter true or false: ";
cin >> word;
reverse(word);
}

void reverse(string word){
if( word == "true")
{ cout << "False";
}
if(word == "false")
{ cout << "True";
}
}
