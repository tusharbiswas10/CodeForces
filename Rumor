    #include <bits/stdc++.h>
     
    #define ll          long long int
    #define mod         1000000007
    #define etempl        "\n"
    #define pb          push_back
    #define max2(a,b)   ((a<b)?b:a)
    #define max3(a,b,c) max2(max2(a,b),c)
    #define min2(a,b)   ((a>b)?b:a)
    #define min3(a,b,c) min2(min2(a,b),c)
     
     
     
    using namespace std;
     
    ll arr[100005];
    vector<ll>graph[100005];
    bool visited[100005];
     
    ll dfs(ll n)
    {
        ll temRes,temp;
        visited[n]=true;
        temRes=arr[n];
       
        for (int i = 0; i < graph[n].size(); ++i)
        
        {
             temp=graph[n][i];
            if(!visited[temp])
            {
                temRes=min(temRes, dfs(temp));
            }
        }
        
        return temRes;
    }
     
    int main(){
    	ios_base::sync_with_stdio(false); cin.tie(NULL);
     
    	ll n,m,res=0;
    	ll a,b;
    	cin>>n>>m;
    	for (ll i = 1; i <= n; ++i)
    	{
    		cin>>arr[i];
    	}
     
    	for (ll i = 0; i < m; ++i)
    	{	
    		cin>>a>>b;
              graph[a].push_back(b);
              graph[b].push_back(a);
    	}
     
    	for (ll i = 1; i <=n; ++i)
    	{
    		if (!visited[i])
    		{
    			res+=dfs(i);
    		}
    	}
     
    	cout<<res;
        return 0;
    }
