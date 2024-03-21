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
class Solution{
public:
        int search(string pat, string txt) {
          int count = 0;
    int n =  txt.size(), m= pat.size() ;
    map<char, int> m1, m2;
    for (int i = 0; i < m ; i++) {
        m1[txt[i]]++;
        m2[pat[i]]++;
    }
    if (m1 == m2) {
        count++;
    }
    for (int i = m; i < n; i++) {
        m1[txt[i-m]]--;
        if (m1[txt[i-m]] == 0) {
            m1.erase(txt[i-m]);
        }
        
        m1[txt[i]]++;
        if (m1 == m2) {
            count++;
        }
    }
    return count;
       
    }

};
 
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
    


