    #include <bits/stdc++.h>
    #define ll          long long int
    #define endl        "\n"
     
     
    using namespace std;
     
    clock_t startTime;
    double getCurrentTime() {
        return (double)(clock() - startTime) / CLOCKS_PER_SEC;
    }
     
     
    int main(){
    	ios_base::sync_with_stdio(false); cin.tie(NULL);
     
    	ll t;
        cin>>t;
     
       
       for (int iii = 0; iii < t; ++iii)
       {
         ll fst,snd,temp1=0,temp2,temp3,final;
     
          
         ll n,k;
     
     
        cin>>n>>k;
        ll str[n+5];
        str[0]=0;
        
        str[1]=1;
        str[2]=3;
        str[3]=1;
        ll q=2,w=3;
        for(ll i=0;i<n;i++){
            if(i<=3){
                cout<<str[i]<<endl;
                cout.flush();
            }
            else{
                ll j=i;
                while(j%2==0)
                    j/=2;
                if(j==1){
                    q*=2;
                    w+=q;
                    cout<<w<<endl;
                    cout.flush();
                    str[i]=w;
                }
                else{
                    str[i]=str[i-q];
                    cout<<str[i]<<endl;
                    cout.flush();
                }
     
     
            }
            ll a;
            cin>>a;
            if(a==1)
                break;
        }
    }
    	
        
        return 0;
    }
