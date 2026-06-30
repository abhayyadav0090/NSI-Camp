#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main(){
    string strLower;
    string strUpper;
    cout << "Enter a Word in lowercase: ";
    cin >> strLower;
    for (int i = 0; i < strLower.size(); i++){
        if(strLower[i]>='a' && strLower[i]<='z'){
            strUpper.push_back(strLower[i]-32);
        }
    }
    cout << strUpper;
    return 0;
}