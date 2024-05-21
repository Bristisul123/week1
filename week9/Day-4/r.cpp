#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define nl "\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;

bool ok(int a, int b)
{
    if(b == 1) return 1;
    if(__gcd(a,b) == 1) return 0;
    return ok(a,b/ __gcd(a,b));
}

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; cin>>T;
    while(T--)
    {
        int a, b; cin>>a>>b;
        if(ok(a,b)) yes;
        else no;
    }
    return 0;
}
    


