#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define nl "\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;


void solve()
{ 

   int n, l, r;  cin >> n >> l >> r;
    vector<int>v(n + 1);
 
    int cnt = 0, l1 = 1, sum = 0;
    for (int i = 1; i <= n; i++)cin >> v[i];
    for (int i = 1; i <= n; i++) {
        if (sum + v[i] < l) {
            sum += v[i];
            continue;
        }
        if (sum + v[i] >= l and sum + v[i] <= r) {
            cnt++;
            sum = 0;
            l1 = i + 1;
            continue;
        }
        if (sum + v[i] > r) {
            if (v[i] > r) {
                l1 = i + 1;
                sum = 0;
                continue;
            }
            sum += v[i];
            for (int j = l1; j < i; j++) {
                if (sum - v[j] >= l and sum - v[j] <= r) {
                    cnt++;
                    sum = 0;
                    l1 = i + 1;
                    break;
                }
                sum -= v[j];
                if (sum < l) {
                    l1 = j + 1;
                    break;
                }
            }
        }
 
 
 
    }
    cout << cnt << '\n';
 
    
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


