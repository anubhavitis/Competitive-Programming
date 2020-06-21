#include<bits/stdc++.h>
#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
using namespace std;
void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}
int main()
{
    ifstream fin;

    char ch;
    for(int i=1;i<17;++i,system("cls"))
   {
       fin.open("my2k19.txt");
        while(fin)
        {
            if(i==16) i=1;
            fin>>ch;
            SetColor(i);
            if(ch=='!') cout<<endl;
            else cout<<ch;

        }
        fin.close();
    }
    return 0;
}
