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

    ll t,tc=1;
    cin>>t;
    while(t--){
        string s;
        ll n;
        cin>>s>>n;
        n=abs(n);
        if(s[0]=='-') s[0]='0';
        ll r=0;
        ll x=0;
        for(int i=0;i<s.size();i++){
            x=r*10+(int)s[i]-(int)'0';
            r=x%n;
            //cout<<r<<el;
        }
        r=x%n;

        if(r==0) cout<<"Case "<<tc++<<": "<<"divisible"<<el;
        else cout<<"Case "<<tc++<<": "<<"not divisible"<<el;
    }

}






