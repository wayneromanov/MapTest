#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

 int year;
 string firstDayInput;
 int currentDayIndex = -1;

    bool isValid = false;

    while (!isValid) {

            cout << "Enter year and first day : ";

    if (!(cin >> year)) {
        cout << "Invalid input; year must be an integer." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
    }
       cin >> firstDayInput;

    if ( year < 1) {
        cout << "Error: year cannot be less than one." << endl;
                continue;
    }

    if (firstDayInput == "Sunday" || firstDayInput =="Sun") currentDayIndex = 0;
            else if (firstDayInput == "Monday" || firstDayInput =="Mon") currentDayIndex = 1;
            else if (firstDayInput == "Tuesday" || firstDayInput =="Tue") currentDayIndex = 2;
            else if (firstDayInput == "Wednesday" || firstDayInput =="Wed") currentDayIndex = 3;
            else if (firstDayInput == "Thursday" || firstDayInput =="Thu") currentDayIndex = 4;
            else if (firstDayInput == "Friday" || firstDayInput =="Fri") currentDayIndex = 5;
            else if (firstDayInput == "Saturday" || firstDayInput =="Sat") currentDayIndex = 6;
            else {
                cout << "Error: invalid input." << endl;
                            continue;
            }

            isValid = true;
        }

        string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August",
            "September", "October", "November", "December"};
        int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth[1] = 29;
        }

       cout << "\n=====================" << endl;
       cout << "         Calendar " << year << "     " << endl;
       cout <<"=====================" << endl;

    for (int i = 0; i < 12; i++) {
        cout << "\n ---" << months[i] << " ---" << endl;
        cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;

      for (int space = 0; space < currentDayIndex; space++) {
          cout << "     ";
      }
    for ( int day = 1; day <= daysInMonth[i]; day++) {
        cout << setw(5) << day;
        currentDayIndex++;

        if (currentDayIndex > 6) {
            cout << endl;
            currentDayIndex = 0;
        }
    }

        if (currentDayIndex != 0) {
            cout << endl;
        }
    }


    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}