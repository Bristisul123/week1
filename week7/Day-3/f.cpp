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

bool ok(int n, vector<int>v,int mid)
{
    multiset<int> s;
    for(auto i : v) s.insert(i);

   for(int i = 1; i<= mid ;i++)
   {
     if(s.empty()) return 0;
     int rang = mid-i+1;
     auto it = s.upper_bound(rang);
     if(it == s.begin()) return 0;
     it--;
     s.erase(it);

     if(!s.empty())
     {
        it = s.begin();
        int a = (*it);
         a += rang;
         s.erase(it);
         s.insert(a);

     }
   }        
   return 1;
}

void solve()
{ 
   int n;  cin>>n;
  vector<int> v(n);
  for(int i = 0;i<n;i++) cin>>v[i];
   
   int l = 0, r = n, mid = 0, ans = 0;

   while(l<=r)
   {
     mid = (l+r)/2;

     if(ok(n,v,mid)) 
        ans = mid, l = mid + 1;
     else r = mid - 1;
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
    


