#include <bits/stdc++.h>

using namespace std;

bool chuaxet[1005];
vector<int> ke[1005];
int v;

void DFS(int u){
    chuaxet[u]=false;
    for(int i = 0;i<ke[u].size();i++){
        if(chuaxet[ke[u][i]]){
            DFS(ke[u][i]);
        }
    }
}

bool isDuyetHet(){
    for(int i =1;i<=v;i++){
        if(chuaxet[i]) return false;
    }
    return true;
}

bool lienThongManh(){
    for(int i = 1;i<=v;i++){
        DFS(i);
        if(isDuyetHet()){
            cout<<"YES"<<endl;
            return true;
        }
    }
    cout<<"NO"<<endl;
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i = 0;i<1001;i++){
            ke[i].clear();
        }
        int e;
        cin>>v>>e;
        for(int i =0;i<e;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        lienThongManh();
    }
    return 0;
}