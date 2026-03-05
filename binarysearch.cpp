#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> key;

    sort(a, a + n);   // Binary search needs sorted array

    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(a[mid] == key) {
            cout << "Found at index " << mid << endl;
            return 0;
        }
        else if(a[mid] < key) {
            low = mid + 1;    // Search right half
        }
        else {
            high = mid - 1;   // Search left half
        }
    }

    cout << "Not found" << endl;
    return 0;
}
