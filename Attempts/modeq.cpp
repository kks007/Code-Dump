#include <bits/stdc++.h>  
using namespace std;
 
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void solve(){
    ll n,m;
    cin>>n>>m;
    ll res=0;

            ll arr[n+1];

            for(ll i=0;i<n+1;i++)
                arr[i]=1;

            for(ll i=2;i<=n;i++){

                ll a=m%i;

                res+=arr[a];

                for(ll j=a;j<=n;j+=i){

                    arr[j]++;
                }
            }

        cout<<res<<endl;
}
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--){
    solve();
    }
    return 0;
}