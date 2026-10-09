#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t ;
    cin>>t ;
    while(t--)
    {int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;
    string result;
    bool chooseMin = true;

    while (left <= right) {
        if (chooseMin) {
            if (arr[left] < arr[right]) {
                result += 'L';
                left++;
            } else {
                result += 'R';
                right--;
            }
        } else {
            if (arr[left] > arr[right]) {
                result += 'L';
                left++;
            } else {
                result += 'R';
                right--;
            }
        }
        chooseMin = !chooseMin;
    }

    cout << result << endl;
    }
}