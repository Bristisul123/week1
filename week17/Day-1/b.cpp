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
  string s; cin>>s;
  
  for(int i = 1; i<s.size() ;i++)
  {
     string x = s.substr(0,i);
    string y = s.substr(i);
    if(stoi(x) < stoi(y) and s[i] != '0')
    {
        cout<< x <<" "<< y<< nl;
        return;
    }
  }
  cout<< -1 <<nl;
 
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
    


