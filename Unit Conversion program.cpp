/******************************************************************************
Eric Zhang
Comp Sci 6
4/30/2020
Unit Conversion Program
*******************************************************************************/
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
        char quit = 'y';
        double length;
        char unitfirst;
        char unitsec;
        double measure;
        while ((quit == 'y') || (quit == 'Y'))
        {
                system("cls");
                cout << "Enter the length you want to convert: ";
                cin >> length;
                cout << "What unit is this length in (I, M, F or C)? ";
                cin >> unitfirst;
                while (!((unitfirst == 'I') || (unitfirst == 'M') || (unitfirst == 'F') || (unitfirst == 'C')))
                {
                        cout << "Invalid choice, please choose a valid unit (I, M, F or C): ";
                        cin >> unitfirst;
                }
                cout << "What unit would you like to convert to (I, M, F or C)? ";
                cin >> unitsec;
                while (!((unitsec == 'I') || (unitsec == 'M') || (unitsec == 'F') || (unitsec == 'C')))
                {
                        cout << "Invalid choice, please choose a valid unit (I, M, F or C): ";
                        cin >> unitsec;
                }
                
                switch (unitfirst)
                {
                case 'I':
                        cout << length << " inches is equivalent to ";
                        measure = length;
                        break;
                case 'M':
                        cout << length << " meters is equivalent to ";
                        measure = length / 0.0254;
                        break;
                case 'C':
                        cout << length << " centimeters is equivalent to ";
                        measure = length / 2.54;
                        break;
                case 'F':
                        cout << length << " feet is equivalent to ";
                        measure = length * 12;
                        break;
                }
                switch (unitsec)
                {
                case 'I':
                        cout << measure << " inches.\n\n";
                        break;
                case 'M':
                        cout << measure / 39.3701 << " meters.\n\n";
                        break;
                case 'C':
                        cout << measure * 2.54 << " centimeters.\n\n";
                        break;
                case 'F':
                        cout << measure / 12 << " feet.\n\n ";
                        break;
                }
                cout << "Would you like to perform another conversion? (Y/N): ";
                cin >> quit;


        }


        system("pause");
        return 0;
}




//3  extra