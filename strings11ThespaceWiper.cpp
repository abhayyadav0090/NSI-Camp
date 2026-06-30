#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main(){
    string str;
    cout << "enter a string: ";
    getline(cin, str);
    for(int i=0; i<str.size(); i++){
        if(str[i]==' '){
            str.erase(i,1);
        }
    }
    cout << str;
    return 0;
}