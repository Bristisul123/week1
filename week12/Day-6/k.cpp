#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int T;
    cin >> T;
    vector<int> results;
    results.reserve(1000000); // Reserve space to avoid reallocation

    while (T--) {
        int N;
        cin >> N;
        for (int i = 0; i < N; ++i) {
            results.push_back(1);
        }
        results.push_back(-1); // A delimiter to distinguish between test cases
    }

    // Output all results with fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int num : results) {
        if (num == -1) {
            cout << '\n';
        } else {
            cout << num << ' ';
        }
    }
}

int main() {
    solve();
    return 0;
}
