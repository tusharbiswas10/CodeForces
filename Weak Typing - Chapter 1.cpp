#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl        "\n"
#define cases(t)          int t;cin>>t;while(t--)


clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

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
 
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll test,run;
   //cin>>test;
    
    cin>>test;
    for(ll i = 1; i <= test; ++i){
        string store;
        ll n,x,count=0,f=INT_MAX,z=0;
        cin>>n;
        
        cin>>store;
        char temp = store[0];
        char temp2 = store[n];

       // ll count = 0;
        
        for(ll i = 1; i < n; ++i){
             if(store[i] == 'X'){
                z++;
                if(temp == 'O'){
                    count++;
                }
                temp='X';
            }
            else if(store[i] == 'F'){
               continue; 
            }

            else{
                if(temp == 'X'){
                    ++count;
                }
                temp='O';
            }
 
        }
        cout<<"Case #"<<i<<":"<<" "<<count<<endl;
    }
    return 0;
}
