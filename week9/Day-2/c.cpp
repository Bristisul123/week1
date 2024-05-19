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

bool prime(int a)
{
    if(a == 1) return 0;
    for(int i = 2; i*i <= a ;i++)
    {
        if(a % i == 0) return 0;
    }
    return 1;
}
bool tprime(int n)
{
    int x = sqrt(n);
    return (x *x == n);
}
void solve()
{ 

int n ; cin>>n;
vector<int>v(n);
 for(int i = 0; i<n;i++)
    cin>>v[i];
for(int i = 0; i<n ;i++)
{
    if(prime(sqrt(v[i])) and tprime(v[i]))
        yes;
    else no;
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
    


