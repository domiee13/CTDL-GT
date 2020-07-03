#include <bits/stdc++.h>

using namespace std;

bool chuaxet[1005];
vector<int> ke[1005];

void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        chuaxet[top]=false;
        for(int i = 0;i<ke[top].size();i++){
            if(chuaxet[ke[top][i]]){
                q.push(ke[top][i]);
            }
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
                BFS(i);
            }
        }
        if(res==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}