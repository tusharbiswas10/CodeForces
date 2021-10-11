#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl        "\n"
#define cases(t)          int t;cin>>t;while(t--)


clock_t startestime;
double getesturrentestime() {
    return (double)(clock() - startestime) / CLOCKS_PER_SEC;
}
ll mod=1e9+7;
ll power(ll base,ll pow){
    ll final1=1;
    for (int i = 1; i <=pow; ++i)
    {
        final1=final1*base;
    }

    return final1;
}

ll modInverse(ll a, ll m)
{
    for (int x = 1; x < m; x++)
        if (((a%m) * (x%m)) % m == 1)
            return x;
}


int main() {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll test = 1,dum=0;
    cin >> test;
    while (test--){
        ll n,p=1,count=0,res=0,k,bac;
        cin>>n>>k;
        vector<ll> v;
        while(k>0){
            count=count+1;
        res+=(k%2)*p;
        ll a=p*n;
        p=(a)%mod;
        res%=mod;
        k/=2;
        bac=k*2;
        }
        cout<<res<<endl;
     }
    return 0;
}
