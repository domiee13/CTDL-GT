#include <iostream>

using namespace std;

int n;
int c[100][100];
bool used[100] = {false};
int x[100];

void init(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++)
            cin>>c[i][j];
    }
}

void Greedy(){
    x[0] = 1;
    used[0] = true;
    int i = 0;
    while(i<n){
        int tmp;
        int b = 99999;
        i++;
        for(int j= 1;j<=n;j++){
            if(!used[j] && c[x[i-1]][j]<b){
                b = c[x[i-1]][j];
                tmp = j;
            }
        }
        x[i] = tmp;
        used[tmp] = true;
    }
}

int main(){
    init();
    Greedy();
    for(int i = 1;i<=n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// graph[4][4] = { {0, 10, 15, 20},
//                     {10, 0, 35, 25},
//                     {15, 35, 0, 30},
//                     {20, 25, 30, 0}
//                   };

// 0 3 14 18 15
// 3 0 4 22 20
// 17 9 0 16 4
// 6 2 7 0 12
// 9 15 11 5 0
// 1 2 3 5 4

//Output 1 2 3 5 4