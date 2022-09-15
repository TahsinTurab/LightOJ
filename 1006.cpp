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

    int n,t,tc=1;
    cin>>t;
    while(t--){
        ll ans[10009];
        for(int i=0;i<6;i++) cin>>ans[i];
        cin>>n;
        
        for (int i =6; i <= n; ++i) {
            ans[i] =( ans[i-1]+ans[i-2]+ans[i-3]+ans[i-4]+ans[i-5]+ans[i-6] ) %M;
        }
        cout<<"Case "<<tc++<<": "<<ans[n]%M<<el;
    }

}






