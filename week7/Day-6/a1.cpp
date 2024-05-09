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

bool ok(int mid, int n, int x,int y)
{
    if(mid < min(x,y)) return 0;
    int cnt = 1;
     mid -= min(x,y);
     cnt += mid/x +(mid/y);
     return cnt >= n;
}

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int n, x, y;cin >> n >> x >> y;
  
  
    int l = 0, r = n * max(x,y);
    while (l  < r) {
        int mid = (l+r) /2;
       if(ok(mid,n,x,y)) {
            r = mid;
        } else {
            l = mid + 1 ;
        }
    }

    cout << l << nl;

    return 0;
}
