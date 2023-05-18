#include<bits/stdc++.h>
#include <math.h>
using namespace std;
#define ll long long



// Driver code
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test;//cin>>test;
    test=1;
    for(ll iii=0;iii<test;iii++){
        ll a,b,c;
        cin>>a>>b>>c;
        ll t1,t2;
        if(a%c==0) t1=a/c;
        else t1=a/c+1;
        if(b%c==0) t2=b/c;
        else t2=b/c+1;
        cout<<t1*t2<<endl;
    }
    return 0;
}
