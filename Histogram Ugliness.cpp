#include <bits/stdc++.h>
 
#define ll          long long int
#define mod         1000000007
#define endl        "\n"
#define pb          push_back
#define max2(a,b)   ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b)   ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
 
 
 
using namespace std;
 
 
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll t;
	cin>>t;
	for (ll iii = 0; iii < t; ++iii)
	{	
    	
    	ll i,j,n;
        cin>>n;
        vector<ll> v;
        v.push_back(0);
        for(i=1; i<=n; i++)
        {
            ll tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        v.push_back(0);
        ll x=0;
        for(i=1;i<=n;i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])
            {
                ll tmp=max(v[i-1],v[i+1]);
                x=x+v[i]-tmp;
                v[i]=tmp;
            }
        }
        ll y=0;
        for(i=1;i<=n+1;i++)
            y=y+abs(v[i]-v[i-1]);
        cout<<x+y<<endl;
    }
 
    	
	
    
    return 0;
}
