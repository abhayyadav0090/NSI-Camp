#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

// 1. Basics of C++
// convert Celsius to Fahrenheit GFG (https://www.geeksforgeeks.org/problems/convert-celsius-to-fahrenheit/1)

int main(){
    
    int c; // O(1) space complexity as we are using only one variable c to store the input value.
    cin >> c; // O(1) time complexity as we are taking input from the user in constant time.

    double f = (9.0/5.0) * c + 32; // O(1) time complexity as we are performing a constant number of arithmetic operations.
    cout << f << endl; // O(1) time complexity as we are printing the value of f in constant time.

    return 0;
}