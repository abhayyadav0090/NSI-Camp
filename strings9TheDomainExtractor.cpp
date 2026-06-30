#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main(){
    string str;
    string ans;
    cout << "Enter the string: ";
    cin >> str;
    int index = str.find("@");
    ans = str.substr(index+1);
    cout << ans;
    return 0;
}