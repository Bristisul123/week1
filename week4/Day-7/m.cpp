#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define nl "\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;


const int N = (1<<15);
vector<ll> palindromes;

void generate_palindrome(){
    for(int i=0;i<N;i++){
        string s = to_string(i);
        ll len = s.size();

        bool f=true;
        for(int j=0; j<len/2; j++){
            if(s[j]!=s[len-j-1]){
                f=false;
                break;
            }
        }
        if(f) 
          palindromes.push_back(i);
    }
}



void solve(){
    ll n; cin >> n;
    vector<ll> v(n);

    vector<ll> fre(N); 
    for(int i=0;i<n;i++){
        cin >> v[i];
        fre[v[i]]++;
    }

    ll ans= n;
     for(int i=0;i<n;i++){
         for(int j=0;j<palindromes.size();j++){
            ll cnt = (v[i] ^ palindromes[j]);
            ans+= fre[cnt];
            
        
        }
    }
    
    
    cout << ans/2 << endl;
    
}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    generate_palindrome();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}