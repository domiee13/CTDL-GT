#include <bits/stdc++.h>

using namespace std;

bool chuaxet[1005];
vector<int> ke[1005];

void BFS(int u,int v){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        chuaxet[top]=false;
        if(top==v){
            cout<<"YES";
            return;
        }
        for(int i = 0;i<ke[top].size();i++){
            if(chuaxet[ke[top][i]]){
                chuaxet[ke[top][i]]=false;
                q.push(ke[top][i]);
            }
        }
    }
    cout<<"NO";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        for(int i =0;i<1001;i++){
            ke[i].clear();
        }
        int n,m;
        cin>>n>>m;
        for(int i = 0;i<m;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        int q;
        cin>>q;
        while(q--){
            memset(chuaxet,true,sizeof(chuaxet));  
            int u,v;
            cin>>u>>v;
            BFS(u,v);
            cout<<endl;
        }
    }
    return 0;
}