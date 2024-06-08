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

  int n,sum = 0, ans =-1; cin >>n;
  vector<int>v(n);

  for(int i=0;i<n;i++)
    cin>>v[i];
    sort(all(v));


    for(int i = 1; i<= 100 ; i++)
    {
       int l =0, r = n-1,cnt = 0;
       while(l<r)
       {
        if(v[l] + v[r] > i) r--;
        else if(v[l] + v[r] < i) l++;
        else
        {
          l++, r--, cnt ++;
        } 
       }
         ans = max(ans,cnt);
    }
    cout<< ans <<nl;
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
    


