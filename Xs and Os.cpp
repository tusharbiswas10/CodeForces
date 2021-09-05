#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl        "\n"

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
double Means(int sum, int N)
{
    
    double d = (double)sum / (double)N;

    return d;
}

void getResult(){
    ll t;
    cin>>t;
    for(ll iii=1;iii<=t;iii++)
    {   ll s,count=0,valOut=0,output=INT_MAX,r=1,impossibleCondition=INT_MAX;
        vector<char> v;
        map<int,int> track;
        map<int,char> te;
        vector<ll> temp;
        ll inp;
        cin>>inp;
        char store[inp][inp];
        for(int i=0;i<inp;i++)
        {
            for(ll j=0;j<inp;j++)
            {
                cin>>store[i][j];
            }
        }
        
        
        for(ll i=0;i<inp;i++)
        {
            ll l=0;
            ll target=0;
            ll make;
            for(ll ii=0;ii<inp;ii++)
            {   
                if(store[i][ii]=='.')
                {
                l++;
                valOut=s*2;
                s=ii;
                }
                if(store[i][ii]=='O')
                {
                    target=r;
                    valOut=s/2;
                    break;
                }
                else{
                    continue;
                }
            }
            if( (output>l) && !target)
            {
                output=l;
                count=r;
                if(output==r){
                    track[s]++;
                }
                
            }
            else if( (output==l) && !target )
            {
            count++;
            if(output==r){
                track[s]++;
            }

            else{
                    continue;
                }
            
            }
 
        }
            for(ll i=0;i<inp;i++)
        {
            if(!track[i])
            {
            ll target=0;
            ll make;
            ll l=0;

            for(ll ii=0;ii<inp;ii++)
            {   
                if(store[ii][i]=='.'){
                    l++;
                }
                if(store[ii][i]=='O')
                {
                    target=r;
                    valOut=r*2;
                    break;
                }
                
                else{
                    continue;
                }
                
 
            }
            if((output>l) && !target )
            {
                output=l;
                count=r;
            }
            else if((output==l) && !target ){
                count++;
            }

            else{
                    continue;
             }
            
            }
        }


        if(output==impossibleCondition){
            cout<<"Case #"<<iii<<": "<<"Impossible"<<endl;
        }
        
        else{
            cout<<"Case #"<<iii<<": "<<output<<" "<<count<<endl;
        }
        
    }
}

int main() {
    
    ll test;
    //cin>>n;
    
        getResult();
        
        

    
    return 0;
}
