#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a[1005], dp[1005] = {0};
    //dp[i] : do dai day con tang dai nhat tinh den vi tri i
    int res = 0;
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
    for(int i = 1;i<=n;i++){
        dp[i] = 1;
        for(int j=1;j<i;j++){
            if(a[i]>a[j]) dp[i] = max(dp[i],dp[j]+1);//a[i] co the chen vao day con j
        }
        res = max(res,dp[i]);
    }
    cout<<res<<endl;
    return 0;
}