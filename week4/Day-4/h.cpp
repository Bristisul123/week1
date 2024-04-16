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
   int n ,p = 0, x = 0, cnt = 0; 
   string s, ans = " "; cin>>n>>s;
  int i = 0 , j = n-1;
  while(i<j)
  {
    if(s[i] == s[j]) x += 2;
    else  p ++;

    i++, j--;
  }

 for(int i=0; i<=n; i++)
 {
     int total = i- p;
 
    if(total<0){
        ans += '0';
          continue;
    }
    
    total=max((total%2),total-x);
    total=max(cnt,total-(n%2));
 
    if(total==0)
        ans += '1';
    else
           ans += '0';
  
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
    


