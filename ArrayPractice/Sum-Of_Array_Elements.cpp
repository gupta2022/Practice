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



//Sum Of the elements of an array 

void input_of_array(int arr[],int n)
{
    for (int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
}

int sum_of_array(int arr[], int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=arr[i];
    }
    return temp;
}

void solve(){
	int arr[100];
    int n;
    cin>>n;
    input_of_array(arr,n);
    int sum=sum_of_array(arr,n);
    cout<<"Sum of the elements is "<<sum<<endl;
}




signed main(){
    fast;
    int t = 1;
    while(t--){
    	solve();
    }
    return 0;
}
