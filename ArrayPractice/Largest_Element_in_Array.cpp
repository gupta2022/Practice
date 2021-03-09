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



void input_of_array(int arr[],int n)
{
    for (int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
}

int largest_element_of_array(int arr[], int n)
{
    int temp=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(temp<arr[i])
        {
            temp=arr[i];
        }
    }
    return temp;
}

void solve(){
	int arr[100];
    int n;
    cin>>n;
    input_of_array(arr,n);
    int t=largest_element_of_array(arr,n);
    cout<<"Largest element of the array is "<<t<<endl;
}




signed main(){
    fast;
    int t = 1;
    while(t--){
    	solve();
    }
    return 0;
}
