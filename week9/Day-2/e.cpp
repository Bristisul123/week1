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

int lcm(int a, int b)
{
    return (a/__gcd(a,b))*b;
}

void solve()
{ 

int n , ans = 0; cin>>n;
  
 for(int i = 1; i*i <= n; i++)
 {
    if(n % i == 0 and lcm(i,n/i) == n)
        ans = i;
 }
 cout<< ans <<" "<< n / ans <<nl;
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
    


