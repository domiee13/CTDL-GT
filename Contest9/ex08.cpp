#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1005];
bool chuaxet[1005];

void BFS(int u){
    queue<int> q;
    int s;
    q.push(u);
    chuaxet[u]= false;
    while(!q.empty()){
        s = q.front();
        q.pop();
        cout<<s<<" ";
        for(int j=0;j<ke[s].size();j++){
            if(chuaxet[ke[s][j]]){
                q.push(ke[s][j]);
                chuaxet[ke[s][j]] = false;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(chuaxet,true,sizeof(chuaxet));
        int v,e,u;
        cin>>v>>e>>u;
        for(int i = 0;i<1001;i++){
            ke[i].clear();
        }
        for(int i = 0;i<e;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        BFS(u);
        cout<<endl;
    }
    return 0;
}