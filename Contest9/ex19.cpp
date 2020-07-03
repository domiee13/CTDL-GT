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
        int soTPLT=0;
        for(int i = 1;i<=v;i++){
            if(chuaxet[i]){
                soTPLT++;
                DFS(i);
            }
        }
        for(int i = 1;i<=v;i++){
            memset(chuaxet,true,sizeof(chuaxet));
            chuaxet[i]=false;
            int count = 0;
            for(int j=1;j<=v;j++){
                if(chuaxet[j]){
                    count++;
                    DFS(j);
                }
            }
            if(count>soTPLT) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}