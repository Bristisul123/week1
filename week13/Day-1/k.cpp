
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
 
  int n,sum = 0, cnt = 0; cin >>n;
  vector<int>v(n);
   for(int i = 0; i<n ;i++)
     cin>> v[i];
     unordered_map<int,int> a;
      a[0] = 1; 
  for (int i = 0; i < n; ++i) {
      sum += v[i];
     int mod =(( sum % n)+ n) % n;
     if(a.count(mod) ) cnt += a[mod];
     a[mod]++;
    }
 
    cout<< cnt <<nl;
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
 
    int T=1; //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
