#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // 1. --> arr[4];
    // 2. --> arr[4]={1,2,3,4};
    // 3. --> arr[]={1,2,3,4};
    // 4. --> arr[4]={1,2};
    
    // int arr[4]={1,2,3,4};
    
    vector <int> arr;
    arr.push_back(0); // {0}
    arr.push_back(1); // {0, 1}
    arr.push_back(340); // {0, 1, 340}
    arr.pop_back(); // {0, 1}
    int lastIndex = arr.back();

    int n = arr.size();
    cout << "Size of Array is: " << arr.size() << endl;

    
    for (int i = 0; i < 7; i++){
        cout << "Value at index " << i+1 << " is: " << arr[i] << endl;
    }

    return 0;
}