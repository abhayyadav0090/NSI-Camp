#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main(){
    string str="Password";
    char target;
    bool flag=false;
    cout << "Enter the target to search: ";
    cin >> target;

    for(int i=0; i<str.size(); i++){
        if(str[i]==target){
            cout << "yes";
            flag=true;
            break;
        }
    }
    if (flag==false) cout<<"No";

    return 0;
}