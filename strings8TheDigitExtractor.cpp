#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main(){
    string str;
    string ans;
    cout << "Enter a string containing different types of letters: ";
    cin >> str;
    for(int i=0; i<str.size(); i++){
        if(str[i]>='0' && str[i]<='9'){
            ans.push_back(str[i]);
        }
    }
    cout << ans;
    return 0;
}