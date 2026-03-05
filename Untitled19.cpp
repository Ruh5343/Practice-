#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> hn(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int p, q, r;

    int m = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < m) {
            m = a[i];
            p = i;
        }
    int index = p;
   for (int i = index; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    }

    for (int i = 1; i < n; i++) {
        if (a[i] < m) {
            m = a[i];
            q = i;
        }
    int index = q;
   for (int i = index; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    }


    for (int i = 1; i < n; i++) {
        if (a[i] < m) {
            m = a[i];
            r = i;
        }
    int index = r;
   for (int i = index; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    }

    cout << p << " " << q<< " " << r;

    return 0;
}
