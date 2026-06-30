#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main(){
    int count = 0;
    string str;
    cout << "Enter the Word: ";
    cin >> str;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            count ++;
        }
    }
    cout << count;
    return 0;
}