#include<bits/stdc++.h>
#include <math.h>
using namespace std;
#define ll long long



// Driver code
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test;
    cin>>test;
    //test=1;
    for(ll iii=0;iii<test;iii++){
        ll n,k;
        cin>>n;
        ll fullSum=n*(n+1)/2;
        
        for(ll revert=1;revert<=n;revert*=2){
            fullSum-=2*revert;
        }
        cout<<fullSum<<endl;
       
        
    }
    return 0;
}
