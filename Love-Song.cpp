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
 
 
// bool visited[MX];
 
// void dfs(ll node){
//         visited[node] = 1;
//         for (ll i = 0; i < gph[node].size(); i++){
//            // ll next = gph[node][i];
//             if (visited[next]==0)
//                 dfs(next);
//         }
// }
 
void swap(ll *x, ll *y)
{
    ll temp = *x;
    *x = *y;
    *y = temp;
}
 
 
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
 
		// ll t;
  //       cin>>t;
  //       for (ll iii = 0; iii < t; ++itt)
  //       {
        ll a,b,c,d,count=0;
        string inp;
       //vector<ll> vect;
        // for (int i = 0; i < count; ++i)
        // {
        //     /* code */
        // }
        cin>>a>>b;cin>>inp;
 
 
        map<int,int> x[a+1];
        map<int,int> y[a+1];
 
        for(ll i=1;i<=a;i++){
            for(auto terv:x[i-1]){
                x[i][terv.first]=terv.second;
            }
           // while(x[i]!=)
            x[i][inp[i-1]-'a']++;
        }
 
        for(ll i=a-1;i>=0;i--){
                    for(auto terv:y[i+1]){
 
                        y[i][terv.first]=terv.second;
              }
 
        y[i][inp[i]-'a']=i;
        }
 
 
        for(ll i=0;i<b;i++){
            ll q,w,result=0;
            cin>>q>>w;
            map<int,int> temp;
            for(auto terv:x[w]){
 
 
                temp[terv.first]=terv.second-x[q-1][terv.first];
            }
            
            for(auto terv:temp){
 
 
                    result=result+((terv.second)*(terv.first+1));
            }
            cout<<result<<endl;
        }
        //}
		
	
    return 0;
}
