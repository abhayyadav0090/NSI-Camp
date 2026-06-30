#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main(){
    string str;
    cout << "Enter the Sentence: ";
    getline(cin, str);
    cout << str << " " << str[0] << " " << str[str.size()-1] ;
    return 0;
}