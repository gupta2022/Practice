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

void swap_two_numbers(int arr[], int n)
{
    int n1,n2;
    cin>>n1>>n2;
    int pos1=0, pos2;
    for(int i=0;i<n;i++)
    {
        if(n1==arr[i])
        {
            pos1=i;
        }
        if(n2==arr[i])
        {
            pos2=i;
        }
    }
    cout<<"the no "<<arr[pos1]<<" will be swapped with "<<arr[pos2]<<endl;
    int temp = arr[pos1];
    arr[pos1]=arr[pos2];
    arr[pos2]=temp;
    cout<<"the no "<<arr[pos1]<<" is swapped with "<<arr[pos2]<<endl;

    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
}

void solve(){
	int arr[100];
    int n;
    cin>>n;
    input_of_array(arr,n);
    swap_two_numbers(arr,n);
}




signed main(){
    fast;
    int t = 1;
    while(t--){
    	solve();
    }
    return 0;
}
