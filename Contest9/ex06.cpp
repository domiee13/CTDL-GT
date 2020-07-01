#include <bits/stdc++.h>

using namespace std;
int g[1000][1000];
bool chuaxet[1005];
// bool chuaxet[1005]= {true}; //Khong memset o duoi se sai ?
int v;

void DFS(int u){
    cout<<u<<" ";
    chuaxet[u] = false;
    for(int i = 1;i<=v;i++){
        if((g[u][i]==1) && (chuaxet[i])){
            DFS(i);
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int e,u;
        cin>>v>>e>>u;
        g[v+5][v+5];
        memset(g,0,sizeof(g));
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i = 0;i<e;i++){
            int a,b;
            cin>>a>>b;
            g[a][b] = 1;
            g[b][a] = 1;
        }
        // for(int i = 1;i<=v;i++){
        //     for(int j = 1;j<=v;j++){
        //         cout<<g[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        DFS(u);
        cout<<endl;
    }
    return 0;
}

