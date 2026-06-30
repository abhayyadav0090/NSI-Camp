#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main(){
    string str;
    string target;
    int index = -1;
    cout << "Enter the string: ";
    cin >> str;
    cout << "Enter the substring to search: ";
    cin >> target;

    index = str.find(target);
    if(index == -1){
        cout << "Not Found!";
    }
    else{
        cout << "SubString found at index: " << index;
    }
    
    return 0;
}