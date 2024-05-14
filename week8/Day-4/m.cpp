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

  int l, a,b; cin>>a>>b>>l;
 set<int>s;
 int i = 0;
 while(pow(a,i) <= l)
 {
    int j = 0;
    while(pow(b,j) <= l)
    {
        int d = pow(a,i) *pow(b,j);
        if(l % d == 0)
            s.insert(l/d);
        j++;
    }i++;

 }
 cout<<s.size()<<nl;

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
    


