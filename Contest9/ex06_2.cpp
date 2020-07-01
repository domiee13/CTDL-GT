#include <bits/stdc++.h>

using namespace std;
vector<int> ke[10005];
bool chuaxet[1005];
// bool chuaxet[1005]= {true}; //Khong memset o duoi se sai ?

void DFS(int u){
    cout<<u<<" ";
    chuaxet[u] = false;
    for(int i = 0;i<ke[u].size();i++){
        if(chuaxet[ke[u][i]]){
            DFS(ke[u][i]);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        for(int i =0;i<1006;i++){
            ke[i].clear();
        }
        int v,e,u;
        cin>>v>>e>>u;
        ke[v+5];
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i = 0;i<e;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        DFS(u);
        cout<<endl;
    }
    return 0;
}

