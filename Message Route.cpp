#include <bits/stdc++.h>
#include <math.h>
#define ll long long
using namespace std;


using vi = vector<int>;
#define pb push_back

int main() {

   
    int n,m;
    cin>>n>>m;

    vector<vector<int>> connection(n+1);
    vector<int> ways(n+1,INT_MAX),parents(n+1);
    vector<bool> visited(n+1,false);
    queue<int> q;
    ll a,b;
    while(m--){
        cin>>a>>b;
        connection[a].push_back(b);
        connection[b].push_back(a);
    }

    ways[1]=0;
    q.push(1);
    visited[1]=true;
    while(!q.empty()){
        int node=q.front();q.pop();
        for(auto i : connection[node]){
            if(visited[i]==false){
                ways[i]=ways[node]+1;
                parents[i]=node;
                visited[i]=true;
                q.push(i);
            }
        }


    }

    if (ways[n] == INT_MAX) cout << "IMPOSSIBLE";
    else {
        cout << ways[n]+1 << "\n";
        vi v{n}; while (v.back() != 1) v.pb(parents[v.back()]);
        reverse(begin(v), end(v));
        for (int t: v) cout << t << " ";
    }
  
  return 0;
}
