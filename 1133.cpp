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
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){cin>>a[i];}

        while(m--){
            char c;
            cin>>c;
            if(c=='S'){
                int x;
                cin>>x;
                for(int i=0;i<n;i++) a[i]+=x;
            }

            else if(c=='M'){
                int x;
                cin>>x;
                for(int i=0;i<n;i++) a[i]*=x;
            }

            else if(c=='D'){
                int x;
                cin>>x;
                for(int i=0;i<n;i++) a[i]/=x;
            }
            else if(c=='P'){
                int x,y;
                cin>>x>>y;
                swap(a[x],a[y]);
            }
            else if(c=='R'){
                reverse(a,a+n);
            }
        }

        cout<<"Case "<<tc++<<": "<<el;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<el;

    }
    

    

}






