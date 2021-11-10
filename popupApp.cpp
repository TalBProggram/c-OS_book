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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
