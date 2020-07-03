#include <bits/stdc++.h>

using namespace std;

bool chuaxet[1005];
vector<int> ke[1005];

void DFS(int u){
    chuaxet[u]=false;
    for(int i = 0;i<ke[u].size();i++){
        if(chuaxet[ke[u][i]]){
            DFS(ke[u][i]);
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i = 0;i<1001;i++){
            ke[i].clear();
        }
        int v,e;
        cin>>v>>e;
        for(int i =0;i<e;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        int res = 0;
        for(int i =1;i<=v;i++){
            if(chuaxet[i]){
                res++;
                DFS(i);
            }
        }
        if(res>=2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}