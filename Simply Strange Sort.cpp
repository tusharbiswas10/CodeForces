#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;



void solve(){
    int n;
    cin>>n;
    vi v(n,0);
    rep(i,0,n) cin>>v[i];
    vi a(n,0);
    a=v;
    sort(all(a));
    int cnt=0;
    while(1){
        if(a==v) break;
        if(cnt%2==0){
            for(int i=0;i<n-1;i+=2){
                if(v[i]>v[i+1]) swap(v[i],v[i+1]);
            }
            cnt++;
        }
        else{
            for(int i=1;i<n;i+=2){
                if(v[i]>v[i+1]) swap(v[i],v[i+1]);
            }
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int t=1;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--){
        solve();
    }
}
