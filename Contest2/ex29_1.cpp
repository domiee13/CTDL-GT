// Cho ma trận A[M][N]. Nhiệm vụ của bạn là đưa ra tất cả các đường đi từ phần tử A[0][0] đến phần tử A[M-1][N-1]. Bạn chỉ được phép dịch chuyển xuống dưới hoặc sang phải phần tử liền kề với vị trí hiện tại.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số M, N tương ứng với số hàng và số cột của ma trận; dòng tiếp theo đưa vào các phần tử của ma trận A[][]; các số được viết cách nhau một vài khoảng trống.
// T, M, N, A[i][j] thỏa mãn ràng buộc: 1≤T ≤10; 1≤M, N, A[i][j]≤100.
// Output:

// Đưa ra số cách di chuyển của mỗi test theo từng dòng.
// Giải thích test 1: Có 3 cách di chuyển là [1 4 5 6], [1 2 5 6] và [1 2 3 6].

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1];
        int dp[n+1][m+1];
        //Reset a va dp, ca dp[0][x] va dp[x][0]
        for(int i = 0;i<=n;i++){
            for(int j = 0;j<=m;j++){
                a[i][j]=dp[i][j]=0;
            }
        }
        //Nhap 
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                cin>>a[i][j];
                dp[i][j]=0;
            }
        }
        //Quy hoach dong
        dp[1][1]=1;//Diem dau tien chi can 1 buoc
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(i==1 && j==1) continue;
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
        cout<<dp[n][m]<<endl;
    }
    return 0;
}