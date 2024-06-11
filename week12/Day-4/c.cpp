#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int optimal_x = 2;
        long long max_sum = 0;
        
        for (int x = 2; x <= n; ++x) {
            int k = n / x;
            long long sum = x * k * (k + 1) / 2;
            if (sum > max_sum) {
                max_sum = sum;
                optimal_x = x;
            }
        }
        
        cout << optimal_x << endl;
    }
    return 0;
}
