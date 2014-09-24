//
//  main.cpp
//  Dates
//
//  Created by Kory Brown on 9/23/14.
//  Copyright (c) 2014 AlphA. All rights reserved.
//

#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;
public:
    Date()
    {
        bool validInput = false;
                while( !validInput)
                {
                    cout << "Enter the day of the year - between < 1-31 >: ";
                    if (!(cin >> day))
                    {
                        cout << "Invalid input...\n\n";
                        validInput = false;
                        cin.clear();
                        cin.ignore(99,'\n');
                    }
                    else if(day > 0 && day > 31)
                    {
                        cout << "Invalid input...needs to be between <1-31>\n\n";
                        validInput = false;
                        cin.clear();
                        cin.ignore(99,'\n');
                    }
                    else
                        validInput = true;
                }
                validInput = false;
                while( !validInput)
                {
                    cout << "Enter the month of the year - between < 1-12 >: ";
                    if (!(cin >> month))
                    {
                        cout << "Invalid input...\n\n";
                        validInput = false;
                        cin.clear();
                        cin.ignore(99,'\n');
                    }
                    else if(month > 0 && month > 12)
                    {
                        cout << "Invalid input...needs to be between <1-12>\n\n";
                        validInput = false;
                        cin.clear();
                        cin.ignore(99,'\n');
                    }
                    else
                        validInput = true;
                }
        
                validInput = false;
                while( !validInput)
                {
                    cout << "Enter the year: ";
                    if (!(cin >> year))
                    {
                        cout << "Invalid input...\n\n";
                        validInput = false;
                        cin.clear();
                        cin.ignore(99,'\n');
                    }
                    else
                        validInput = true;
                }

    }
    ~Date(){};
    void Print()
    {
        cout << "\nHere is the the date you entered\n";
        cout << month << "\\" << day << "\\" << year << endl;
        // month first
        switch(month)
        {
            case 1:
                cout << "January " << day << ", " << year << endl;
                break;
            case 2:
                cout << "Febuary " << day << ", " << year << endl;
                break;
            case 3:
                cout << "March " << day << ", " << year << endl;
                break;
            case 4:
                cout << "April " << day << ", " << year << endl;
                break;
            case 5:
                cout << " May " << day << ", " << year << endl;
                break;
            case 6:
                cout << "June " << day << ", " << year << endl;
                break;
            case 7:
                cout << "July " << day << ", " << year << endl;
                break;
            case 8:
                cout << "August " << day << ", " << year << endl;
                break;
            case 9:
                cout << "Septemeber " << day << ", " << year << endl;
                break;
            case 10:
                cout << "October " << day << ", " << year << endl;
                break;
            case 11:
                cout << "Novemeber " << day << ", " << year << endl;
                break;
            case 12:
                cout << "December " << day << ", " << year << endl;
                break;
        }
        
        // day first
        switch(month)
        {
            case 1:
                cout<< day << " January "  << year << endl;
                break;
            case 2:
                cout << day  << " Febuary " << year << endl;
                break;
            case 3:
                cout << " March " << year << endl;
                break;
            case 4:
                cout << day << " April " << year << endl;
                break;
            case 5:
                cout << day << " May " << year << endl;
                break;
            case 6:
                cout << day << " June " << year << endl;
                break;
            case 7:
                cout << day << " July " << year << endl;
                break;
            case 8:
                cout << day << " August " << year << endl;
                break;
            case 9:
                cout << day << " Septemeber " << year << endl;
                break;
            case 10:
                cout << day << " October " << year << endl;
                break;
            case 11:
                cout << day << " Novemeber " << year << endl;
                break;
            case 12:
                cout << day << " December " << year << endl;
                break;
        }
        cout << endl;
    }
    
//
};

int main()
{
    Date date;
    date.Print();   
    
    return 0;
}
