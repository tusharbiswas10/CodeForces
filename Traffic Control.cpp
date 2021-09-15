
#include<bits/stdc++.h>
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
 





 ll a=105;

 
ll store[105][105];
ll backup[105][105];

int main(){
   
    ll test,t,step = 1;
    cin >> test;
    
    while(test--){
        cout << "Case #"<<step<<": ";

        ll inp,temp,inp2,count=0,inp3,inp4;
        vector<ll> v;
        ll qq,qw;
        cin>>inp>>inp2>>inp3>>inp4;

       
        for( int i = 0; i < inp ; i++ ){
            qq=i;
            for( int j = 0; j < inp2 ; j++ ){
                qw=j;
                store[i][j] = 1;
                backup[i][j] = 1;
                count++;

            } 
            //cout<<"debug: "<<qq<<qw<<endl;        
        } 

         temp = inp+inp2-2;

        if( inp4<=temp ||  inp3<=temp)
        {
            cout<<"Impossible"<<endl;
            step++;
            count--;
            //cout<<"debug: impossible is ok "<<endl;
            continue;
        }
        // else if(inp4=>temp ||  inp3=>temp){

        // }
        // else{
        //     continue;
        // }

        cout << "Possible"<<endl;

        store[inp-1][inp2-1] = inp3-temp;
        backup[inp-1][inp2-1] = inp3-temp;

        store[inp-1][0] = inp4-temp;
        backup[inp-1][0] = inp4-temp;

       
        for( int i = 0; i < inp ; i++ ){
            for( int j = 0; j < inp2 ; j++ ){
                //cout<<"debug: store output is ok "<<endl;
                cout << store[i][j] << " ";
            }
            //cout<<"debug: "<<count<<endl;
            cout << endl;
        }
        step++;
    }
    
 
 
 
}
