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

  int n,k, sum = 0; cin>>n>>k;
  vector<int>v;
  set<int>s;
  for(int i = 0; i<=n; i++)s.insert(i);
  for(int i=0;i<n;i++){
    int x; cin>>x;
     s.erase(x);
    v.push_back(x);
   
}
   v.push_back(*s.begin());
   int p = k % v.size();
   int r = v.size() - 1;
   int l = v.size() - p;

   for(int i = l; i<= r ;i++) cout<<v[i] <<" ";
 for(int i =0; i< l-1; i++) cout<< v[i] <<" ";
    cout<< nl;


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
    


