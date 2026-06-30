#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main(){
    string str;
    cout << "Enter the string to Reverse: ";
    cin >> str;
    int n=str.size();
    for(int i=0; i<n/2; i++){
        swap(str[i], str[n-i-1]);
    }
    cout << str;
    return 0;
}