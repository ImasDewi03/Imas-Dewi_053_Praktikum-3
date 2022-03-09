#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int ubah(const char *s){
  int x=0;
  for( ; *s != '\0'; s++)
  ++x;
  return x;
}
main(void)
{
system ("COLOR 1E");
cout<<"\t\t\t\tPraktikum 3 X\n";
cout<<"\t\t\t\t(POINTER)\n";
cout<<"========================================================\n";
cout<<"- PROGRAM MENGHITUNG BANYAKNYA KARAKTER DENGAN POINTER -\n";
cout<<"========================================================\n";
  char string[80];
  cout <<"Tuliskan Kata : "; gets(string);
  cout <<"\nJumlah Karakter    : "<< ubah(string);
  getch();
  return 0;
}
