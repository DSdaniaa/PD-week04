#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int, int);
main()
{
  system("cls");
  gotoxy(23,14);
cout << "  @@@@@@@@@@                 @                 @@           @      @                 @                                    "; 
gotoxy(23,15);              
cout << "  @       @@@               @ @                @ @          @      @                @ @                                   ";  
gotoxy(23,16);                   
cout << "  @         @@             @   @               @  @         @      @               @   @                                  "; 
gotoxy(23,17);                  
cout << "  @          @            @     @              @   @        @      @              @     @                                  "; 
gotoxy(23, 18);             
                
cout << "  @           @          @       @             @    @       @      @             @       @                                 "; 
gotoxy(23,19);              
              
cout << "  @           @         @         @            @     @      @      @            @         @                                "; 
gotoxy(23, 20);              
              
cout << "  @           @        @@@@@@@@@@@@@           @      @     @      @           @@@@@@@@@@@@@                               "; 
gotoxy(23, 21);            
             
cout << "  @           @       @             @          @       @    @      @          @             @                              ";
gotoxy(23, 22);             
            
cout << "  @           @      @               @         @        @   @      @         @               @                             "; 
gotoxy(23, 23);             
        
cout << "  @          @@     @                 @        @         @  @      @        @                 @                            ";
gotoxy(23,24);              
   
cout << "  @        @@@     @                   @       @          @ @      @       @                   @                            ";
gotoxy(23, 25);             

cout << "  @@@@@@@@@@      @                     @      @           @@      @      @                     @                           ";
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
