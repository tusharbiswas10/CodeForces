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
 
 
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll t;
	cin>>t;
	for (ll iii = 0; iii < t; ++iii)
	{	
    	
    	int n;
        cin>>n;
        string s;
        cin>>s;
        
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0')
            {
                count++;
            }
        }
        if (count == 0)
            cout << "DRAW\n";
 
        else if (count == 1)
            cout << "BOB"<<endl;
        else if (count % 2 == 0)
        {
            cout << "BOB"<<endl;
        }
        else
        {
            cout << "ALICE"<<endl;
        }
    }
 
    	
	
    
    return 0;
}
