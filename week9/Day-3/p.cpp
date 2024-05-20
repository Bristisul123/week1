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
 vector<int> a(n);
  for(int i =0; i<n; i++)
    cin>>a[i];
map<int,int> cnt;
for(int i = 0; i<n;i++)
{
    for(int j = 2; j*j<=a[i]; j++)
    {
        if(a[i] %j == 0)
        {
            while(a[i] % j == 0)
            {
                cnt[j]++;
                a[i] /= j;
            }
        }
    }
    if(a[i] > 1) cnt[a[i]]++;
} 
 bool f = 1;
for(auto [x,y] : cnt)
  {
    if(y % n != 0)
    {
        f = 0; break;
    }
  }
  if(f) yes;
  else no;

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
    

 