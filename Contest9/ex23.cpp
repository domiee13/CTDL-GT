// Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Sử dụng thuật toán DFS, hãy kiểm tra xem đồ thị có tồn tại chu trình hay không?

// Input:

// Dòng đầu tiên đưa vào T là số lượng bộ test.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh,  số cạnh của đồ thị; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
// T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
// Output:

// Đưa ra YES hoặc “NO” kết quả test theo từng dòng tương ứng với đồ thị tồn tại hoặc không tồn tại chu trình.

#include <bits/stdc++.h>

using namespace std;

vector<int> ke[10005];
bool chuaxet[10005];
int truoc[10005];

void DFS(int u){
    chuaxet[u] = false;
    cout<<u<<" ";
    for(int i = 0;i<ke[u].size();i++){
        if(chuaxet[ke[u][i]]){
            DFS(ke[u][i]);
            truoc[ke[u][i]] = u;
        }
    }
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u]=false;
    while(!q.empty()){
        int top = q.front();
        q.pop();
        cout<<top<<" ";
        for(int i = 0;i<ke[top].size();i++){
            if(chuaxet[ke[top][i]]){
                q.push(ke[top][i]);
                chuaxet[ke[top][i]] = false;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int u,v,e;
        cin>>u>>v>>e;
        for(int i = 0;i<10005;i++){
            ke[i].clear();
        }
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i = 0;i<v;i++){
            int a,b;
            cin>>a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        // DFS(1);
        cout<<endl;
        BFS(e);
        if(truoc[1]==u) cout<<"YES"<<endl;
    }
}