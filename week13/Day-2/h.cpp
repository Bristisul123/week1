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

  int n,sum = 0, cnt = 0; 
  string s; cin>>s;
  map<char,int>mp;
  for(int i = 0;i<s.size();i++)
    mp[s[i]]++;
    char c;
    for(auto x : mp)
    {
        if(x.second % 2){ 
        c = x.first;
        cnt++;
        }
    }
    if((s.size() % 2 == 0 and cnt > 0) or cnt >1)
      cout<< "NO SOLUTION";

    else{
        string r = " ";
        for(auto x : mp)
        {
            for(int i = 1; i <= x.second/2;i++)
                r += x.first;

        }
              cout<<r ;
            if(s.size() % 2) cout<<c;
            reverse(r.begin(),r.end());
            cout<< r;    
    }  
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
    


