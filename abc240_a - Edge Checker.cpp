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
      ll a,b;
        cin>>a>>b;
        if(abs(a-b)==1 or ((a==1 and b==10) or (b==1 and a==10)))cout<<"Yes";
        else cout<<"No";

    }
    return 0;
}
