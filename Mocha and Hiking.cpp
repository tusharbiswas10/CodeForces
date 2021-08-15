#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define mod 1000000007
     
#define endl "\n"
#define pb push_back
#define max2(a,b)   ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b)   ((a>b)?b:a)
 
 
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> p(n);
        for(auto &item:p) cin>>item;
        if(p[0]){
            cout<<n+1<<" ";
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
        }
        else if(!p[n-1]){
            for(int i=1;i<=n+1;i++) cout<<i<<" ";
            cout<<nl;
        }
        else{
            int flag=-1;
            for(int i=0;i<n-1;i++){
                if(p[i]==0 &&p[i+1]){
                    flag=i+1;
                    break;
                }
            }
            if(flag==-1) cout<<-1<<nl;
            else{
                for(int i=1;i<=flag;i++)
                    cout<<i<<" ";
                cout<<n+1<<" ";
                for(int i=flag+1;i<=n;i++) cout<<i<<" ";
                cout<<endl;
            }
        }
        
    }
    
    return 0;
}
