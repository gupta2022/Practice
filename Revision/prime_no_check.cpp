#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}




void solve(){
	int no;
    cin>>no;
    int f=0;


    
    for(int i =2;i<=sqrt(no);i++)
    {
        if(no%i==0)
        {
            f++;
        }
    }
    if(no==1)
    cout<<"The number "<<no<<" is not prime";
    else
    {
        if(no==2)
        cout<<"The number "<<no<<" is prime";
        else
        {
            if(f==0)
            cout<<"The number "<<no<<" is prime";
            else
            cout<<"The number "<<no<<" is not prime";
        }
    }
}




signed main(){
    fast;
    int t = 1;
    while(t--){
    	solve();
    }
    return 0;
}
