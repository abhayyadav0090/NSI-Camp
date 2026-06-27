#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr(1000);
    iota(arr.begin(), arr.end(), 1); // Fills 1 to 1000

    int s, e;

    s = 0;
    e = arr.size()-1;
    int target;

    cout << "Enter target: ";
    cin >> target;

    while(s<=e){

        int mid = (s+e)/2;

        if(arr[mid]==target){
            cout << "Target: " << target << " is found at: " << mid+1 << endl;
            break;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return 0;
}