#include<bits/stdc++.h>
#include <math.h>
using namespace std;
#define ll long long

// need optimization

// Driver code
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test;
    //cin>>test;
    test=1;
    for(ll iii=0;iii<test;iii++){
        string N;
        cin>>N;
        ll n=stoi(N);
        ll digit = pow(10, N.length()/2);
        int ans = 0;
        for (int i = 1; i < digit; i++) {
            string tmp = to_string(i);
            ll target = stoi(tmp + tmp);
            if (target <= n) {
                ans += 1;
            }
    }
    cout << ans << endl;
            
    }
       
        
    
    return 0;
}
