#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main(){
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    cout << sum;
    return 0;
}