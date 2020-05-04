#include <bits/stdc++.h>

using namespace std;

//n la so goi hang, M la trong luong toi da co the mang
int n,M;
struct dat{
    int w = 0,v =0; //Weight & value
};

dat a[105];
int dp[110][110];   //dp[i][j] là giá trị lớn nhất
// khi chọn đến gói hàng thứ i và khối lượng tối đa có thể lấy được là j
int res = 0;

void solve(){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=M;j++){
            if(j<a[i].w) dp[i][j] = dp[i-1][j];
            else 
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-a[i].w]+a[i].v);
            res = max(res,dp[i][j]);
        }
    }
}

int main(){
    cin>>n>>M;
    for(int i =1;i<=n;i++){
        cin>>a[i].w>>a[i].v;
    }
    solve();
    cout<<res<<endl;
    return 0;
}