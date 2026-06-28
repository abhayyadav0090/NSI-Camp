#include <bits/stdc++.h>
using namespace std;

#define ll long long4
#define mod 1000000007

int main()
{

    vector<int> nums = {1, 2, 3, 4, 4, 4, 4, 5, 6};

    int target;
    cin >> target;

    int s = 0, e = nums.size() - 1;

    // first occurrence
    int first = -1;

    while (s <= e)
    {

        int mid = (s + e) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    if (first == -1)
        cout << " Target does not exist" << endl;
    else
        cout << " Target exist at index " << first << endl;

    // last occurrence
    int last = -1;
    s = 0, e = nums.size() - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            s = mid + 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    if (last == -1)
        cout << " Target does not exist" << endl;
    else
        cout << " Target last exist at index " << last << endl;

    return 0;
}