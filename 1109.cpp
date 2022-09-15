#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
#define el "\n"
#define ll long long
#define ull unsigned long long
#define M 10000007
using namespace std;
//using namespace __gnu_pbds;

//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    
    if(a.second==b.second){
        return (a.first>b.first);
    }
    else return (a.second < b.second);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    int arr[1001]={0};
    for(int i=1;i<=1000;i++){
        for(int j=i;j<=1000;j+=i){
            arr[j]++;
        }
    }

    vector<pair<int,int>> v;
    for(int i=1;i<=1000;i++){
        v.push_back({i,arr[i]});
    }
    
    sort(v.begin(),v.end(),sortbysec);

    //cout<<"======================="<<el;


    int t,tc=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<"Case "<<tc++<<": "<<v[n-1].first<<el;
    }

}






