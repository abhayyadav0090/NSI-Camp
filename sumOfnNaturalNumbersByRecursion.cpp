#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int sum = n + sumOfNaturalNumbers(n-1);
    return sum;
}

int main() {
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    int sum = sumOfNaturalNumbers(n);
    cout << "Sum of " << n << " natural numbers is: " << sum;
    return 0;
}