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
        int i=1;
        bool temp=false;
        for(int i=0;i<1000;i++){
            if(i*c>=a and i*c<=b){
                cout<<i*c;
                temp=true;
                break;
            }
        }
        if(temp==false){
            cout<<-1;
        }
        else{
            
        }

    }
    return 0;
}
