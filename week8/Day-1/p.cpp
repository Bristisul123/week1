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
   
int b = 0,B = 0;
  string s,s2; cin>>s;
 for(int i = s.size()-1; i>=0 ;i--)
 {
    if(s[i] =='b') b++;
   else  if(s[i] =='B') B++;
    else
    {
        if(s[i] >='a' and s[i] <='z'){
            if(b) b--;
              else s2.push_back(s[i]);
        }
        if(s[i] >='A' and s[i] <='Z'){
            if(B) B--;
             else s2.push_back(s[i]);
        }
    }
 }
 reverse(s2.begin(),s2.end());
 cout<< s2<<nl;
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
    


