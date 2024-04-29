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

 string s,s1; cin>>s>>s1;
 int cnt = 0, ans = 0;

 for(int i = 0; i< s.size(); i++)
 {
    for(int j = 1; j< s.size()+1; j++)
    {
        string x = s.substr(i,j);
        //cout<< x<<" ";
        if(s1.find(x) != -1 and x.size() > ans)
            ans = x.size();
    }
 }
  cout<<s.size() + s1.size() - 2*ans <<nl;
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
    


