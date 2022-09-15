#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
#define el "\n"
#define ll long long
#define ull unsigned long long
#define M 10000007
using namespace std;
//using namespace __gnu_pbds;

//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,tc=1;
    cin>>t;
    while(t--){

        ll n,x=0;
        cin>>n;
        ll m=n;
        //vector<int>v;
        while(n){
            x=x*10+(n%10);
            n/=10;
        }
        if(m==x) 
            cout<<"Case "<<tc++<<": "<<"Yes"<<el;
        else
            cout<<"Case "<<tc++<<": "<<"No"<<el;
    }

}






