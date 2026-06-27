#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr1[5] = {1, 2, 5, 9, 6};
    for (int i = 0; i < 5; i++){
        cout << arr1[i] << " " << endl;
    }

    vector <int> arr2;
    arr2.push_back(9);
    arr2.push_back(7);
    arr2.push_back(3);
    arr2.push_back(2);

    for (int i = 0; i < 100; i++)
    {
        arr2.push_back(i*i*i*i/3);
    }
    

    for (int i = 0; i < arr2.size(); i++){
        cout << arr2[i] << " ";
    }

    return 0;
}