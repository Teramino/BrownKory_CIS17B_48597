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
    Date(){}
    ~Date(){};
   friend ostream &operator << (ostream &strm, const Date &obj)
    {
        switch(obj.month)
        {
            case 1:
                strm <<"January " << obj.day << " " << obj.year << endl;
                break;
            case 2:
                strm << "Febuary " << obj.day << " " << obj.year << endl;
                break;
            case 3:
                 strm << "March " << obj.day << " " << obj.year << endl;
                break;
            case 4:
                strm << "April " << obj.day << " " << obj.year << endl;
                break;
            case 5:
                strm << "May " << obj.day << " " << obj.year << endl;
                break;
            case 6:
                strm << "June " << obj.day << " " << obj.year << endl;
                break;
            case 7:
                strm << "July " << obj.day << " " << obj.year << endl;
                break;
            case 8:
                strm << "August " << obj.day << " " << obj.year << endl;
                break;
            case 9:
                strm << "Septemeber " << obj.day << " " << obj.year << endl;
                break;
            case 10:
                strm << "October " << obj.day << " " << obj.year << endl;
                break;
            case 11:
                strm << "Novemeber " << obj.day << " " << obj.year << endl;
                break;
            case 12:
                strm << "December " << obj.day << " " << obj.year << endl;
                break;
        }

            return strm;
    }
    
    friend istream &operator >> (istream &strm,  Date &obj)
    {
        bool validInput = false;
        while( !validInput)
        {
            cout << "Enter the day of the year - between < 1-31 >: ";
            if (!(cin >> obj.day))
            {
                cout << "Invalid input...\n\n";
                validInput = false;
                cin.clear();
                cin.ignore(99,'\n');
            }
            else if(obj.day > 0 && obj.day > 31)
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
            if (!(cin >> obj.month))
            {
                cout << "Invalid input...\n\n";
                validInput = false;
                cin.clear();
                cin.ignore(99,'\n');
            }
            else if(obj.month > 0 && obj.month > 12)
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
            if (!(cin >> obj.year))
            {
                cout << "Invalid input...\n\n";
                validInput = false;
                cin.clear();
                cin.ignore(99,'\n');
            }
            else
                validInput = true;
        }
        return strm;
    }
    
    Date operator++() // Prefix
    {
        if (day == 31)
        {
            if (month == 12)
            {
                month = 1;
                year++;
            }
            else
                month++;
            day = 1;
            return *this;
        }
        else
            day++;
        return *this;
    }
    
    Date operator--()
    {
        if (day == 1)
        {
            if (month == 1)
            {
                month = 12;
                year--;
            }
            else
                month++;
            day = 12;
            return *this;
        }
        else
            day++;
        return *this;
    }
    Date operator-(const Date &right)
    {
        Date temp;
        
        temp.day = day - right.day;
        return temp;
    }
};

int main()
{
    Date date;
    cin >> date;
    cout << endl << date;
    cout << "\nAdding a day to your date\n";
    ++date;
    cout << date;
    cout << "\nSubtracting a day to your date\n";
    --date;
    cout << date;
    
    
    return 0;
}
