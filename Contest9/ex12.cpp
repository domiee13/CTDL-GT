#include <bits/stdc++.h>

using namespace std;

bool chuaxet[1005];
vector<int> ke[1005];
int truoc[1005];

void BFS(int u){
    queue<int> q;
    int s;
    q.push(u);
    chuaxet[u]=false;
    while(!q.empty()){
        s=q.front();
        q.pop();
        for(int i = 0;i<ke[s].size();i++){
            if(chuaxet[ke[s][i]]){
                q.push(ke[s][i]);
                chuaxet[ke[s][i]]=false;
                truoc[ke[s][i]]=s;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int v,e,s,f;
        cin>>v>>e>>s>>f;
        for(int i =0;i<1001;i++){
            ke[i].clear();
            truoc[i]=0;
        }
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i = 0;i<e;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        BFS(s);
        //Display
        vector<int> res;
        if(truoc[f]==0) cout<<-1;
        else{
            res.push_back(f);
            int tmp = truoc[f];
            while(tmp!=s){
                res.push_back(tmp);
                tmp = truoc[tmp];
            }
            res.push_back(s);
        }
        for(int i = res.size()-1;i>=0;i--){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}