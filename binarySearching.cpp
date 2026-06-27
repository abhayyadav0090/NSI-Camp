#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr={1,2,3,4,5,6,7,8,9};
    int s, e;
    s = 0;
    e = arr.size()-1;
    int target;
    cout << "Enter target: ";
    cin >> target;
    cout << s << " and " << e << endl;
    int mid = (s+e)/2;

    if(arr[mid]==target){
        cout << "Target " << target << " is found" << endl;
    }
    else if(arr[mid]>target){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    cout << s << " and " << e;

    return 0;
}