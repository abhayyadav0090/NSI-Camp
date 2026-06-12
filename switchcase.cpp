/*
Given an integer choice denoting the choice of the user and a list containing the single value R or two values L and B depending on the choice.
If the user's choice is 1, calculate the area of the circle having the given radius(R).  
Else if the choice is 2, calculate the area of the rectangle with the given length(L) and breadth(B).

Note : A list arr[], containing the single value R or the two values L and B, as input parameters.
Return the area of the desired geometrical figure. Use Math.PI for the value of pi.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int choice;
    cout << "Enter your choice (1 for circle, 2 for rectangle): ";
    cin >> choice;

    vector<double> arr;
    if (choice == 1) {
        double R;
        cout << "Enter the radius of the circle: ";
        cin >> R;
        arr[0] = R;
    } else if (choice == 2) {
        double L, B;
        cout << "Enter the length and breadth of the rectangle: ";
        cin >> L >> B;
        arr[0] = L;
        arr[1] = B;
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    switch (choice) {
        case 1: {
            double area = M_PI * arr[0] * arr[0];
            cout << "Area of the circle: " << area << endl;
            break;
        }
        case 2: {
            double area = arr[0] * arr[1];
            cout << "Area of the rectangle: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}