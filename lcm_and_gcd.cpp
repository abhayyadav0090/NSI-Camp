#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int hcf, lcm;
        
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    lcm = (a*b) / hcf;
    cout << "LCM of " <<a << " and " << b << " is: " << lcm << endl;
    cout << "GCD of " <<a << " and " << b << " is: " << hcf << endl;
    return 0;
}