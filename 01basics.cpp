#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

// 1. Basics of C++
// Absolute Value GFG (https://practice.geeksforgeeks.org/problems/absolute-value/1/?track=SPC-Mathematics&batchId=140)

// You can write anything void or int main() but it is recommended to write int main() as it is the standard way of writing the main function in C++. The main function is the entry point of a C++ program and it should return an integer value to indicate the success or failure of the program.

void absoluteValueOfN(int n){
    
    // int n; // O(1) space complexity as we are using only one variable n to store the input value.
    // cin >> n; // O(1) time complexity as we are taking input from the user in constant time.
    
    if(n < 0){ // O(1) time complexity as we are checking the condition in constant time.
        cout << n << endl; // O(1) time complexity as we are printing the value of n in constant time.
        n = -n; // O(1) time complexity as we are negating the value of n in constant time.
        cout << n << " is the value of n" << endl; // O(1) time complexity as we are printing the value of n in constant time.
    }
    else{ // O(1) time complexity as we are checking the condition in constant time.
        cout << n << " is the value of n" << endl; // O(1) time complexity as we are printing the value of n in constant time.
    }

    // return 0; // O(1) time complexity as we are returning a value in constant time.
}

int main(){
    int n; // O(1) space complexity as we are using only one variable n to store the input value.
    cin >> n; // O(1) time complexity as we are taking input from the user in constant time.
    absoluteValueOfN(n); // O(1) time complexity as we are calling the function in constant time.
    return 0; // O(1) time complexity as we are returning a value in constant time.
}

// Time Complexity: O(1) as we are performing a constant number of operations regardless of the input size.
// Space Complexity: O(1) as we are using only a constant amount of space to store the variable n and the output.