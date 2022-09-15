#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
#define el "\n"
#define ll long long
#define ull unsigned long long
#define M 10000007
using namespace std;
//using namespace __gnu_pbds;

//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
double cnt[1000002];
void mem(){
    cnt[0]=0;
    for(int i=1;i<1000002;i++) cnt[i]=cnt[i-1]+(log(i));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,tc=1;
    cin>>t;
    mem();
    while(t--){
        ll n,b;
        cin>>n>>b;
        ll x=1+((cnt[n]/log(b)));
        cout<<"Case "<<tc++<<": "<<x<<el;

    }

}






