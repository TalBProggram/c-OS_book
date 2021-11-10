// popupApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

int main()
{
    for (int i = 0;i < 5; i++)
    {

        MessageBox(NULL, "im really annoying!", "Haha!", MB_OKCANCEL); // massage popup
        cout << "started" << endl;
        srand((unsigned int)time(NULL)); // set the random on the clock
        unsigned int t = rand() % 100; // random between 1 to 99
        Sleep(t * 100 + 4); // sleep between 1 and 13 secs
        cout << "time = " << to_string(t / 10 + 4) << endl; // print the time slept
    }
}
