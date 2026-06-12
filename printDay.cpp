// write a program that prints the day of the week for a given number (1-7) where 1 is Monday and 7 is Sunday
// 1 -> Monday 2 -> Tuesday 3 -> Wednesday 4 -> Thursday 5 -> Friday 6 -> Saturday 7 -> Sunday

#include <bits/stdc++.h>
using namespace std;

int main(){

    int choice;

    cout << "Select a Number from 1 to 7: ";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;
        
        default:
            break;
    }

    return 0;
}