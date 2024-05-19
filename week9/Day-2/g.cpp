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
int n; cin>>n;
map<int,int> cnt;
while(n--){
    int a; cin>>a;

    for(int j = 2; j*j<=a; j++)
    {
        if(a %j == 0)
          cnt[j]++;
            while(a % j == 0) 
                a /= j;
       
    }
    if(a > 1) cnt[a]++;

} 
int ans = 1;
for(auto [x,y] : cnt)
  {
   ans = max(ans,y);
  }
  cout<< ans <<nl;
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