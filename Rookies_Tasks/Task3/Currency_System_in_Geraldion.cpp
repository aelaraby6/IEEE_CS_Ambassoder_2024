#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> banknotes(n);
    for (int i = 0; i < n; ++i) {
        cin >> banknotes[i];
    }

    if (find(banknotes.begin(), banknotes.end(), 1) != banknotes.end()) {
        cout << -1 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;
}