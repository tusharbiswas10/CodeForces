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
bool palindrom(string ss)
{
    string s1=ss;
 
    reverse(s1.begin(),s1.end());
    if(s1==ss)
    	{
    		return true;
    	}
    return false;
}
 
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll t;
	cin>>t;
	for (ll iii = 0; iii < t; ++iii)
	{	
    	
    ll n,i,j=0;
    cin>>n;
    ll a[n],sum=0;
    for (i = 0; i < n; ++i)
    
    {
        cin >>a[i];
        sum+=a[i];
    }
    if(sum%n!=0)
    {
        cout<<"-1\n";
        continue;
        
    }
    ll c=sum/n;
    for (i = 0; i < n; ++i)
    {
        if(a[i]>c)
        j++;
    }
    cout<<j<<endl;
 
 
 
    }
    
 
    	
	
    
    return 0;
}
